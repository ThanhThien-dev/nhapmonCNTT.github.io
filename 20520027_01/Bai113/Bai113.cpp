#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	int n;
	cin >> n;
	int ahh;
	int at = 2;
	int i = 2;
	while (i<=n)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 1;
}