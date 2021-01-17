#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap x: ";
	float x;
	cin >> x;

	float r = (x * 3.14159265359) / 180;
	float s = 1;
	float t = 1;
	float m = 1;
	int i = 2;
	float e = 1;
	int dau = -1;

	while (e >= pow(10, -6))
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		e = t / m;
		s = dau * (s + e);
		i = i + 2;
		dau = -dau;
	}
	cout << "Cos(x) = " << s;
	return 1;
}