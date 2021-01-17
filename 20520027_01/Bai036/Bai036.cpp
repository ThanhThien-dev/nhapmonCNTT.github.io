#include<iostream>
using namespace std;

int main()
{
	float x, n, t, i;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	
	t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * x;
		i = i + 1;
	}
	cout << "Tich T bang: " << t;
	return 1;
}