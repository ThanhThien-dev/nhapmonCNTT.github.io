#include<iostream>
using namespace std;

int main()
{
	int a, n, i;
	cout << "Nhap n: ";
	cin >> n;

	i = 1;
	a = 1;
	while (i <= n)
	{
		a = a * i;
		cout << a << " ";
		i++;
	}
	return 1;
}