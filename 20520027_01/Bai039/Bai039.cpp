#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	float n, s, i;
	cin >> n;
	s = 1;
	i = 1;
	while (i <= n)
	{
		s = s * (1 + (1 / (i * i)));
		i = i + 1;
	}
	cout << "Tich S(" << n << ") = " << s;
	return 1;
}