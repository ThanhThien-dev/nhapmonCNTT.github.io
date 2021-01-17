#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	while (a<0)
	{
		a = -a;
	}
	while (b < 0)
	{
		b = -b;
	}
	cout << "a = "<<a;
	cout << "\nb = "<<b;
	return 1;
}