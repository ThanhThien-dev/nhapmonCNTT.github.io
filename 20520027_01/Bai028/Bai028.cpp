#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	int n,s,i;
	cin >> n;

	s = 0;
	i = 1;

	while (i <= n)
	{
		s = s + i * i;
		i++;
	}
	cout << "S(" << n << ") = ";
	i = 1;
	while (i < n)
	{
		cout << i*i << "+";
		i = i + 1;
	}
	cout << i*i << " = " << s;
	return 1;
}