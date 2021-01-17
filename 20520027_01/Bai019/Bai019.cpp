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

	float x12 = x8 * x4;
	cout << "\nx12 = x8 * x4 = " << x12;

	float x13 = x12 * x;
	cout << "\nx13 = x12 * x = " << x13;

	return 1;
}