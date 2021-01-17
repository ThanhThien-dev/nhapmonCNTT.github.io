#include<iostream>
#include <math.h>
using namespace std;
void nhap(float&, float&);
float cv(float, float);
float dt(float, float);

int main()
{
	float n, r;
	nhap(n, r);
	cout << "Chu vi da giac la: " << cv(n, r);
	cout << "\nDien tich da giac la: " << dt(n, r);
	return 1;
}

void nhap(float& n, float& r)
{
	cout << "n = ";
	cin >> n;
	cout << "r = ";
	cin >> r;
}

float cv(float n, float r)
{
	float cv;
	return cv = 2 * n * r * (float)sin(3.14 / n);
}

float dt(float n, float r)
{
	float dt;
	return dt = (1.0 / 2) * n * r * r * sin(2 * 3.14 / n);
}