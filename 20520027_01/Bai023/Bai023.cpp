#include<iostream>
using namespace std;

int main()
{
	int n, C;
	cout << "Nhap n: \n";
	cin >> n;
	C = (n / 10) % 10;
	cout << "Chu so hang chuc la: " << C;
	return 1;
}