//ComplexDiy.cpp
#include "ComplexDiy.h"
using namespace std;

ComplexDiy::ComplexDiy() :Complex(0, 0, 0, 0) {}
ComplexDiy::ComplexDiy(double x1, double y1, double x2, double y2)
{
	SetRe1(x1);
	SetRe2(x2);
	SetIm1(y1);
	SetIm2(y2);
}
ComplexDiy::ComplexDiy(const ComplexDiy& a)
{
	x1 = a.x1;
	x2 = a.x2;
	y1 = a.y1;
	y2 = a.y2;
}
void ComplexDiy::Sub()
{
	cout << "vidnimannia: " << (x1 - x2, y1 - y2) << endl;
}
void ComplexDiy::Div()
{
	cout << "dilennia: " << (x1 * x2 + y1 * y2, x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2) << endl;
}
void ComplexDiy::Conj1()
{
	cout << "1-she spriazhene chyslo: " << (x1, -y1) << endl;
}
void ComplexDiy::Conj2()
{
	cout << "2-he spriazhene chyslo: " << (x2, -y2) << endl;
}
