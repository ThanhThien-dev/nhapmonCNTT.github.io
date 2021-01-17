#include<iostream>
using namespace std;

int main()
{
	float n, i, at, att, ahh;
	cout << "Nhap n: ";
	cin >> n;

	at = 1;
	att = 1;
	i = 2;
	while (i <= n)
	{
		ahh = at + att;
		att = at;
		at = ahh;
		i++;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 1;
}