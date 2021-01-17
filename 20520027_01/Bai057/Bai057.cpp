#include<iostream>
using namespace std;

int main()
{
	int n, s, i;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong cac uoc so nho hon " << n << " la : ";
	s = 0;
	i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i++;
	}
	cout << s;
	return 1;
}