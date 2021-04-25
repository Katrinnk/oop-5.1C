//ComplexInkDec.h
#pragma once
#include "Complex.h"
class ComplexDec :public Complex
{
public:
	ComplexDec();
	ComplexDec(double, double, double, double);
	ComplexDec(const ComplexDec&);

	ComplexDec& operator ++();
	ComplexDec& operator --();
	ComplexDec operator ++(int);
	ComplexDec operator --(int);
};

