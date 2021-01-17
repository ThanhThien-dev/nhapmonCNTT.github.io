#include<iostream>
using namespace std;

int main()
{
	int a, n, i;
	cout << "Nhap n: ";
	cin >> n;

	i = 0;
	a = 1;
	while (i<=n)
	{
		a = a * 2;
		cout << a << " ";
		i++;
	}
	return 1;
}