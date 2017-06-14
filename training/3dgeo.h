#ifndef DGEO_H //can not start by number apparently
#define DGEO_H

#include<iostream> //input output

using namespace std;

class point
{
	private: //by defaut membres are private
		double x, y, z;
	public:
		point(double a=0, double b=0, double c=0); //creator, can be made inline
		void show();
};

point::point(double a, double b, double c)
{
	x=a;
	y=b;
	z=c;
}

void point::show()
{
	cout << "point locate at (" << x << ", " << y << ", " << z << ")\n";
}

#endif
