#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap r \n";
	float r,V;
	cout << "r = ";
	cin >> r;

	V = (float)4 / 3 * 3.14 * r * r * r;
	cout << "V = " << V;
	return 1;
}