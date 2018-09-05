#include <iostream> //prompt input outpud
#include <fstream> //handle create, read write file
#include <string> //string librairy
#include <cmath>
#include <chrono> //high resolution time measurement

#include <fftw3.h>

using namespace std;

void load_data(float *datal, int npoint, char *name)
{
	int i=0;

	ifstream file;
	file.open(name, ios::in); //add | ios::out for writing

	for (i=0 ; i<npoint ; i++)
	{
		file>>datal[i];
		//cout << datal[i] << "\n";
	}
	file.close();
} 

void write_data (float *datal, int npoint, char *name)
{
	int i=0;
	ofstream file;
	file.open(name);

	for (i=0 ; i<npoint ; i++) {file << datal[i] << "\n";};

	file.close();
}

fftwf_complex *resize_fft_complex (fftwf_complex *pl, int n)
{
	fftwf_complex *tmp;
	tmp = (fftwf_complex *)fftwf_malloc(sizeof(fftwf_complex)*n);
	fftwf_free(pl);
	return tmp;
}

main(int argc, char *argv[])
{
	int a=16384;
	char name[40]="line_example.txt";
	float *data;
	float *envelope;
	data  = new float [a];
	envelope = new float [a];

	//load_data(data, a, name);

	fftwf_complex *fft_out;
	fftwf_complex *fft_inverse;
	fftwf_plan p_r2c;
	fftwf_plan p_c2c;
	fft_out = (fftwf_complex *) fftwf_malloc(sizeof(fftwf_complex)*a);
	fft_inverse = (fftwf_complex *) fftwf_malloc(sizeof(fftwf_complex)*a/2);
	fft_inverse = resize_fft_complex (fft_inverse, a);

	auto start =chrono::high_resolution_clock::now();
	//init the fft algorithms
	p_r2c=fftwf_plan_dft_r2c_1d(a, data, fft_out, FFTW_MEASURE); //fftw_estimate used to search for the most performant fft algorithm in our case, r2c for fft real to complex, in this case fft_out is calculate for n/2+1 long
	p_c2c=fftwf_plan_dft_1d(a, fft_out, fft_inverse, FFTW_BACKWARD, FFTW_MEASURE);
	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Plan measurement: " << elapsed.count()*1000 << " ms\n";

	load_data(data, a, name); //initialisation must be made after initialized the fft plan, because it writes in the buffers
	int i=0;
	for (i=0 ; i<a ; i++)
	{
		fft_out[i][0]=0.0; //real part
		fft_out[i][1]=0.0; //imaginary part
		fft_inverse[i][0]=0.0;
		fft_inverse[i][1]=0.0;
	}

	start=chrono::high_resolution_clock::now();
	fftwf_execute(p_r2c);
	fftwf_execute(p_c2c);
	finish=chrono::high_resolution_clock::now();
	elapsed=finish-start;
	cout << "Execute time: " << elapsed.count()*1000000 << " us\n";

	start=chrono::high_resolution_clock::now();
	for (i=0 ; i<a ; i++)
	{
		envelope[i]=sqrt(fft_inverse[i][0]*fft_inverse[i][0]+fft_inverse[i][1]*fft_inverse[i][1]);

	}
	finish=chrono::high_resolution_clock::now();
        elapsed=finish-start;
        cout << "Modulus time: " << elapsed.count()*1000000 << " us\n";

	char name_out[40]="envelope.txt";
	write_data (envelope, a, name_out);

	delete data;
	delete envelope;
	fftwf_destroy_plan(p_r2c);
	fftwf_destroy_plan(p_c2c);
	fftwf_free(fft_out);
	fftwf_free(fft_inverse);
	return 0;
}
