#include<iostream>
using namespace std;

int main()
{
	int n, d, i;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So cac uoc so cua " << n << " la : ";
	d = 0;
	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			d = d + 1;
		i++;
	}
	cout << d;
	return 1;
}