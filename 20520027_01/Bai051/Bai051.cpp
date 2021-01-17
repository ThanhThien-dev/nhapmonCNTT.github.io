#include<iostream>
using namespace std;

int main()
{
	int n, s, i;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich cac uoc so cua " << n << " la : ";
	s = 1;
	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			s = s * i;
		i++;
	}
	cout << s;
	return 1;
}