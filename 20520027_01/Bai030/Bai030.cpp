#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	float n, s, i;
	cin >> n;
	s = 0;
	i = 2;
	while (i <= 2*n)
	{
		s = s + (1 / i);
		i = i + 2;
	}
	cout << "Tong S bang: " << s;
	return 1;
}