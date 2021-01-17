#include<iostream>
using namespace std;

int main()
{
	int at, x, y, i, n, ahh;
	cout << "Nhap n: ";
	cin >> n;

	at = -2;
	x = 3;
	y = 7;
	i = 2;
	while (i <= n)
	{
		x = x * 3;
		y = y * 7;
		ahh = 5 * at + 2 * x - 6 * y + 12;
		at = ahh;
		i++;
	}cout << "So hang thu " << n << " cua day la: " << ahh;

	return 1;
}