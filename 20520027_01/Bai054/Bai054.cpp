#include<iostream>
using namespace std;

int main()
{
	int n, s, i;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong cac uoc so chan cua " << n << " la : ";

	s = 0;
	i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 2;
	}
	cout << s;
	return 1;
}