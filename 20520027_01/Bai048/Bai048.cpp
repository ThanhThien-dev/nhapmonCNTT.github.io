#include<iostream>
using namespace std;

int main()
{
	float x, n, s, i;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	s = x;
	i = 1;
	while (i <= n)
	{
		s = s * (x + i);
		i = i++;
	}
	cout << "S(" << n << ") = " << s;
	return 1;
}