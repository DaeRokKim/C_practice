#include <iostream>
#include "Calculator.h"
using namespace std;

void Calculator::Init()
{
   add = 0;
   sub = 0;
   div = 0;
   mul = 0;
}

float Calculator::Add(float x, float y)
{
   add++;
   return x + y;
}
float Calculator::Div(float x, float y)
{
   div++;
   return x / y;
}
float Calculator::Sub(float x, float y)
{
   sub++;
   return x - y;
}
float Calculator::Mul(float x, float y)
{
   mul++;
   return x * y;
}

void Calculator::ShowOpCount()
{
   cout << "덧셈: " << add << " 뺄셈: " << sub << " 곱셈: " << mul << " 나눗셈: " << div << endl;
}