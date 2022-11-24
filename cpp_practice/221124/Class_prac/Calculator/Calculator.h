#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

class Calculator
{
private:
   int add, div, sub, mul;

public:
   void Init();
   float Add(float x, float y);
   float Div(float x, float y);
   float Sub(float x, float y);
   float Mul(float x, float y);
   void ShowOpCount();
};

#endif