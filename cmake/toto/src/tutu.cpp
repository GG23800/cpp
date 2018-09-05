#include "titi.hpp"
#include "toto.hpp"
#include <iostream>

#include "tutu.hpp"

float mult (float a, float b)
{
  return a*b;
}

float mult(float a, int b)
{
    std::cout << "entering mult function" << std::endl;
    unsigned int i=0;
    float c=0.0;
    c=a;
    for (i=1 ; i<b ; i++)
    {
        c=plus(c,a);
    }
    std::cout << "end mult function" << std::endl;
    return c;
}

int16_t mult(int16_t a, int16_t b)
{
    std::cout << "entering mult int16_t" << std::endl;
    int16_t c=a;
    for (int16_t i=1 ; i<b ; i++)
    {
        c=plus(c,a);
    }
    std::cout << "end mult int16" << std::endl;
    return c;
}

/*float multmin(float a, int b)
{
  float c=-a;
  for (int i=0 ; i<b ; i++) {c=minus(c,a);}
  return c;
}*/
