#include <iostream> //prompt input outpud
#include <fstream> //handle create, read write file
#include <string> //string librairy
#include <cmath>
#include <chrono> //high resolution time measurement

#include <fftw3.h>

using namespace std;

void load_data(double *datal, int npoint, char *name)
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

void write_data (double *datal, int npoint, char *name)
{
	int i=0;
	ofstream file;
	file.open(name);

	for (i=0 ; i<npoint ; i++) {file << datal[i] << "\n";};

	file.close();
}

fftw_complex *resize_fft_complex (fftw_complex *pl, int n)
{
	fftw_complex *tmp;
	tmp = (fftw_complex *)fftw_malloc(sizeof(fftw_complex)*n);
	fftw_free(pl);
	return tmp;
}

main(int argc, char *argv[])
{
	int a=16384;
	char name[40]="line_example.txt";
	double *data;
	double *envelope;
	data  = new double [a];
	envelope = new double [a];

	//load_data(data, a, name);

	fftw_complex *fft_out;
	fftw_complex *fft_inverse;
	fftw_plan p_r2c;
	fftw_plan p_c2c;
	fft_out = (fftw_complex *) fftw_malloc(sizeof(fftw_complex)*a);
	fft_inverse = (fftw_complex *) fftw_malloc(sizeof(fftw_complex)*a/2);
	fft_inverse = resize_fft_complex (fft_inverse, a);

	auto start = chrono::high_resolution_clock::now();
	//init the fft algorithms
	p_r2c=fftw_plan_dft_r2c_1d(a, data, fft_out, FFTW_MEASURE); //fftw_estimate used to search for the most performant fft algorithm in our case, r2c for fft real to complex, in this case fft_out is calculate for n/2+1 long
	p_c2c=fftw_plan_dft_1d(a, fft_out, fft_inverse, FFTW_BACKWARD, FFTW_MEASURE);
	auto finish = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = finish - start;
	cout << "Plan measurement time: " << elapsed.count()*1000 << " ms\n";

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
	fftw_execute(p_r2c);
	fftw_execute(p_c2c);
	finish=chrono::high_resolution_clock::now();
	elapsed = finish-start;
	cout << "Execute time: " << elapsed.count()*1000000 << " us\n";

	for (i=0 ; i<a ; i++)
	{
		envelope[i]=sqrt(fft_inverse[i][0]*fft_inverse[i][0]+fft_inverse[i][1]*fft_inverse[i][1]);
	}
	finish=chrono::high_resolution_clock::now();
	elapsed=finish-start;
	cout << "Total envelope detection time: " << elapsed.count()*1000000 << " us\n";

	char name_out[40]="envelope.txt";
	write_data (envelope, a, name_out);

	delete data;
	delete envelope;
	fftw_destroy_plan(p_r2c);
	fftw_destroy_plan(p_c2c);
	fftw_free(fft_out);
	fftw_free(fft_inverse);
	return 0;
}
