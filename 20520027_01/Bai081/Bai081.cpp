#include<iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	float s = (float)1/x;
	float m = x;
	int i = 1;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + (1/m);
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}