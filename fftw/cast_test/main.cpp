#include <iostream> //prompt input outpud
#include <fstream> //handle create, read write file
#include <string> //string librairy
#include <cmath>
#include <chrono> //high resolution time measurement
#include <cstdint> //for using int16_t

using namespace std;

main(int argc, char *argv[])
{
	int nb=16384;
	int i=0;
	int display=1;
	int nd=16;
	int16_t *dataint;
	float *datafloat;

	dataint = new int16_t [nb];
	datafloat = new float [nb];

	for (i=0 ; i<nb ; i++) {dataint[i]=(int16_t)i;}

	auto start=chrono::high_resolution_clock::now();
	for (i=0 ; i<nb ; i++)
	{
		datafloat[i]=(float)(dataint[i]);

	}
	auto finish=chrono::high_resolution_clock::now();
        chrono::duration<double> elapsed=finish-start;
        cout << "Conversion time: " << elapsed.count()*1000000 << " us\n";

	if (display)
	{
		for (i=0 ; i<nd ; i++)	{cout << "datafloat[" << i << "] = " << datafloat[i] << "\n";}
	}

	delete dataint;
	delete datafloat;

	return 0;
}
