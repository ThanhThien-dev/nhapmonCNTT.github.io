#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	float n, s, i;
	cin >> n;
	s = 0;
	i = 1;
	while (i <= 2*n+1)
	{
		s = s + (i / (i + 1));
		i = i + 2;
	}
	cout << "Tong S bang: " << s;
	return 1;
}