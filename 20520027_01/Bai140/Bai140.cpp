#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap a = ";
	float a;
	cin >> a;

	cout << "Nhap b = ";
	float b;
	cin >> b;

	cout << "Nhap c = ";
	float c;
	cin >> c;

	float x1, x2;
	float d = b * b - 4 * a * c;
	if (d <= 0)
	{
		if (d == 0)
		{
			x1 = -b / (2 * a);
			cout << "Phuong trinh co 2 nghiem kep x1 va x2 bang: \n" << x1;
		}
		else
			cout << "Phuong trinh vo nghiem.";
	}
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "Phuong trinh co 2 nghiem:\n" << "x1 = " << x1 << "\nx2 = " << x2;
	}
	return 1;
}