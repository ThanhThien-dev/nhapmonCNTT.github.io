#include<iostream>
using namespace std;

int main()
{
	int n, t, i;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich cac uoc so le cua " << n << " la : ";

	t = 1;
	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			t = t * i;
		i = i + 2;
	}
	cout << t;
	return 1;
}