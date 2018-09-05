#include"titi.hpp"
#include"toto.hpp"
#include<iostream>

float plus (float a, float b)
{
    std::cout << "plus float float" << std::endl;
    b+=a;
    return b;
}

float plus (float a, int b)
{
    std::cout << "plus float int" << std::endl;
    a+=b;
    return a;
}

int16_t plus (int16_t a, int16_t b)
{
    std::cout << "plus int_t int_t" << std::endl;
    a+=b;
    return a;
}
