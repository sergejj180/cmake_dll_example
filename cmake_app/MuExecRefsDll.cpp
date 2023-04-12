// MyExecRefsDll.cpp
// compile with: /EHsc /link MathFuncsDll.lib

#include <iostream>

#include "MathFuncsDll.h"

using namespace std;

int main()
{
	double a = 7.4;
	int b = 99;

	cout << "a + b = " <<
		MathFuncs::MyMathFuncs::Add(a, b) << endl;
	cout << "a - b = " <<
		MathFuncs::MyMathFuncs::Subtract(a, b) << endl;
	cout << "a * b = " <<
		MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
	b = 0;

	try
	{
		if (b == 0) throw(0);
		cout << "a / b = " <<
			MathFuncs::MyMathFuncs::Divide(a, b) << endl;
	}
	catch (int b)
	{
		cout << "can not be zero" << endl;
	}

	return 0;
}