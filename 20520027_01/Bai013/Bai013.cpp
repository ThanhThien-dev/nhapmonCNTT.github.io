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

	float x6 = x4 * x2;
	cout << "\nx6 = x4 * x2 = " << x6;

	float x7 = x6 * x;
	cout << "\nx7 = x6 * x = " << x7;
	return 1;
}