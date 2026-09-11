#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

double Calculator::Div (double a, double b)
{
    if (b == 0) return -1;
    return a / b
}

double Calculator::Mul (double a, double b)
{
   return a * b;
}