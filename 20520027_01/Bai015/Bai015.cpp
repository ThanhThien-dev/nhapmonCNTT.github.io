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

	float x16 = x8 * x8;
	cout << "\nx16 = x8 * x8 = " << x16;

	__int64 x32 = x16 * x16;
	cout << "\nx32 = x16 * x16 = " << x32;

	long long x64 = x32 * x32;
	cout << "\nx62 = x32 * x32 = " << x64;
	return 1;
}