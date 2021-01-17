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

	float x15 = x16 * 1/x;
	cout << "\nx15 = x16 * 1/x = " << x15;

	return 1;
}