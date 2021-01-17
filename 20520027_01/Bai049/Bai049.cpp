#include<iostream>
using namespace std;

int main()
{
	int n, i;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Uoc cua " << n << " la : ";
	i = 1;
	while (i<=n)
	{
		if (n % i == 0)
			cout << i << " ";
		i++;
	}
	return 1;
}