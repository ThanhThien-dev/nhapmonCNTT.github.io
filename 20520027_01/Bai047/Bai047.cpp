#include<iostream>
using namespace std;

int main()
{
	float n, s, i;
	cout << "Nhap n: ";
	cin >> n;

	s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + sqrt(1 + (1 / (i * i)) + (1 / ((i + 1) * (i + 1))));
		i = i++;
	}
	cout << "S(" << n << ") = " << s;
	return 1;
}