#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	a = abs(a);
	b = abs(b);

	while (a!=b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	cout << "UCLL cua a va b la: " <<a;
	return 1;
}