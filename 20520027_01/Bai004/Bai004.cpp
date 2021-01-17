#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap r \n";
	int r;
	cout << "r = ";
	cin >> r;

	float dt = 4 * 3.14 * r * r;
	cout << "dt = " << dt;
	return 1;
}