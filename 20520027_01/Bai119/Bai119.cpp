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
		ahh = (float)(at * at + 2) / (2 * at);
		at = ahh;
		i++;
	}cout << "So hang thu " << n << " cua day la: " << ahh;

	return 1;
}