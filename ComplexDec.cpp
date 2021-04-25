#include "ComplexDec.h"
using namespace std;

ComplexDec::ComplexDec()
{
	x1 = 0;
	x2 = 0;
	y1 = 0;
	y2 = 0;
}
ComplexDec::ComplexDec(double x1, double y1, double x2, double y2)
{
	SetRe1(x1);
	SetRe2(x2);
	SetIm1(y1);
	SetIm2(y2);
}
ComplexDec::ComplexDec(const ComplexDec& a)
{
	x1 = a.x1;
	x2 = a.x2;
	y1 = a.y1;
	y2 = a.y2;
}
ComplexDec& ComplexDec::operator ++()
{
	++x1;
	return *this;
}
ComplexDec& ComplexDec::operator --()
{
	--x1;
	return *this;
}
ComplexDec ComplexDec::operator ++(int)
{
	y1++;
	return *this;
}
ComplexDec ComplexDec::operator --(int)
{
	y1--;
	return *this;
}