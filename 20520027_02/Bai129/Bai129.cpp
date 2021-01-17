#include<iostream>
#include<iomanip>
using namespace std;
void nhap(float&, float&, float&);
void tangdan(float, float, float);

int main()
{
	float a, b, c;
	nhap(a, b, c);
	tangdan(a, b, c);
	return 1;
}

void nhap(float& a, float& b, float& c)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
}

void tangdan(float a, float b, float c)
{
	float lc = 0;
	if (a > b)
	{
		lc = a;
		a = b;
		b = lc;
	}
	if (a > c)
	{
		lc = a;
		a = c;
		c = lc;
	}
	if (b > c)
	{
		lc = b;
		b = c;
		c = lc;
	}
	cout << "Thu tu tang dan: " << a << setw(11) << b << setw(11) << c << setw(11);
}
