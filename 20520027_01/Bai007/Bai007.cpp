#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap F: \n";
	float C, F;
	cout << "F = ";
	cin >> F;

	C = (float)5 / 9 * F - 32;
	cout << "C = " << C;
	return 1;
}