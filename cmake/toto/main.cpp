#include<iostream>
#include<string>

#include"src/titi.hpp"
#include"src/tutu.hpp"
#include"src/toto.hpp"
#include"src/tata.hpp"

int main()
{
    printmess("beggining of main");
    float a=1.1, b=8.3, c=0.0;
    int d=4;
    c=plus(a,b);
    std::cout << "c plus = " << c << std::endl;
    c=mult(a,d);
    std::cout << "c mult = " << c << std::endl;
    //c=minus(b,a);
    //std::cout << "c minus = " << c << std::endl;
    //c=multmin(a,d);
    //std::cout << "c multmin = " << c << std::endl;

    int16_t i1=5, i2=8, i3=0;
    i3=mult(i1,i2);
    std::cout << "int16 mult " << i1 << "* " << i2 << " = " << i3 << std::endl;

    printmess("end of main");
    return 0;
}
