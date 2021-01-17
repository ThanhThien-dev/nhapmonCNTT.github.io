#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	float n, s, i;
	cin >> n;
	s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + (1 / i);
		i++;
	}
	cout << "s(" << n << ") = ";
	i = 1;
	while (i < n)
	{
		cout << 1 / i << "+";
		i++;
	}
	cout << 1/i;
	return 1;
}