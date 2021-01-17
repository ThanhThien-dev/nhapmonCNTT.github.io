#include<iostream>
using namespace std;

int main()
{
	double n, s, i;
	cout << "Nhap n: ";
	cin >> n;

	s = 1;
	i = 1;
	while (i <= n)
	{
		s = 1.0 / (1 + s);
		i++;
	}
	cout << "S(" << n << ") = " << s;
	return 1;
}