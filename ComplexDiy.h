//ComplexDiy.h
#pragma once
#include "Complex.h"
class ComplexDiy :private Complex
{
public:
	ComplexDiy();
	ComplexDiy(double, double, double, double);
	ComplexDiy(const ComplexDiy&);

	void Sub();
	void Div();
	void Conj1();
	void Conj2();
};

