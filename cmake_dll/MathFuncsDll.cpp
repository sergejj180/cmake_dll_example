// MathFuncsDll.cpp : Defines the exported functions for the DLL application.
//


#include "MathFuncsDll.h"
//#include <stdexcept>

using namespace std;

namespace MathFuncs
{
    double MyMathFuncs::Add(double a, double b)
    {
        return a + b;
    }

    double MyMathFuncs::Subtract(double a, double b)
    {
        return a - b;
    }

    double MyMathFuncs::Multiply(double a, double b)
    {
        return a * b;
    }

    double MyMathFuncs::Divide(double a, double b)
    {
        /*if (b == 0) {
            throw 0;
        }*/
        return a / b;
    }
}