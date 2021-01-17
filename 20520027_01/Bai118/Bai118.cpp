#include<iostream>
using namespace std;

int main()
{
	float at, i, n, ahh;
	cout << "Nhap n: ";
	cin >> n;

	at = 2;
	i = 2;
	while (i <= n)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		at = ahh;
		i++;
	}cout << "So hang thu " << n << " cua day la: "<<ahh;

	return 1;
}