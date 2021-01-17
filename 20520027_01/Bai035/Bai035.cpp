#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	float n, t, i;
	cin >> n;
	t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * i;
		i = i + 1;
	}
	cout << "Tich T bang: " << t;
	return 1;
}