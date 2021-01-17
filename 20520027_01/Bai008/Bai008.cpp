#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	double param, result;
	cout << "Nhap goc: ";
	cin >> param;
	result = sin(param * 3.14 / 180);
	cout << "Sin cua " << param << "do la: " << result;
	return 1;
}