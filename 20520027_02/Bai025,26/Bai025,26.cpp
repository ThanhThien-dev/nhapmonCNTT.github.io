#include<iostream>
using namespace std;
void nhap(int&, int&);

int main()
{
	int a, b;
	nhap(a, b);
	return 1;
}

void nhap(int& a, int& b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}
