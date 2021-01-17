#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a, b, c, lc;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	
	while (a>b)
	{
		lc = a;
		a = b;
		b = lc;
	}

	while (a > c)
	{
		lc = a;
		a = c;
		c = lc;
	}

	while (b > c)
	{
		lc = b;
		b = c;
		c = lc;
	}
	cout << "Thu tu tang dan cua ba so la:\n" << a << setw(6) << b << setw(6) << c;
	return 1;
}