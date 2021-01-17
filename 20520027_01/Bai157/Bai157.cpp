#include<iostream>
using namespace std;

int main()
{
	float a, n, i;
	cout << "Nhap n: ";
	cin >> n;

	i = 1;
	a = 0;
	while (i <= n)
	{
		a = 1/i;
		cout << a << " ";
		i = i + 1;
	}
	return 1;
}