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
		s = s + 1 / (i * (i + 1) * (i + 2));
		i = i + 1;
	}
	cout << "Tong S(" << n << ") = " << s;
	return 1;
}