#include<iostream>
using namespace std;

int main()
{
	int n, d, i;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So cac uoc so chan cua " << n << " la : ";
	d = 0;
	i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			d = d + 1;
		i = i + 2;
	}
	cout << d;
	return 1;
}