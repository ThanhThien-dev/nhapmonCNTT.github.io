#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap x: \n";
	int x;
	cout << "x = ";
	cin >> x;

	float x2 = x * x;
	cout << "x2 = x * x = " << x2;

	float x4 = x2 * x2;
	cout << "\nx4 = x2 * x2 = " << x4;

	float x8 = x4 * x4;
	cout << "\nx8 = x4 * x4 = " << x8;

	float x10 = x8 * x2;
	cout << "\nx10 = x8 * x2 = " << x10;

	__int64 x11 = x10 * x;
	cout << "\nx11 = x10 * x = " << x11;

	return 1;
}