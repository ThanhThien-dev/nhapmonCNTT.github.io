#include<iostream>
using namespace std;

int main()
{
	int n, ahh, bhh;
	cout << "Nhap n: ";
	cin >> n;

	int at = 2;
	int bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu a(" << n << ") cua day la: " << ahh;
	cout << "\nSo hang thu b(" << n << ") cua day la: " << bhh;
	return 1;
}