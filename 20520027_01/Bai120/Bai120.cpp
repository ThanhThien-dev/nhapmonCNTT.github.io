#include<iostream>
using namespace std;

int main()
{
	float n, i, at, ahh;
	cout << "Nhap n: ";
	cin >> n;

	at = 2;
	i = 2;
	while (i<=n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		at = ahh;
		i++;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 1;
}