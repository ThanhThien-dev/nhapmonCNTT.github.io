#include<iostream>
using namespace std;
void ptbac2(int, int, int);

int main()
{
	int a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	ptbac2(a, b, c);
	return 1;
}

void ptbac2(int a, int b, int c)
{
	int d = b * b - 4 * a * c;
	if (d<=0)
	{
		if (d == 0)
		{
			int x1 = (float)-b / (2 * a);
			int x2 = (float)-b / (2 * a);
			cout << "Phuong trinh co nghiem kep: x1 = x2 = " << x1;
		}
		else
			cout << "Phuong trinh vo nghiem.";
	}
	else
	{
		int x1 = (float)(-b + sqrt(d)) / (2 * a);
		int x2 = (float)(-b - sqrt(d)) / (2 * a);
		cout << "x1 = " << x1;
		cout << "\nx2 = " << x2;
	}
}
