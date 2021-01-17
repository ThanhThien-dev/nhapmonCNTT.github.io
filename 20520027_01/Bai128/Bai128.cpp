#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	while (a > b)
	{
		c = a;
		a = b;
		b = c;
	}
	cout << a << ", " << b;
	return 1;
}