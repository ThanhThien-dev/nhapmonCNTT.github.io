#include<iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;

	float s = 0;
	float t = 1;
	float m = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + t / m;
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}