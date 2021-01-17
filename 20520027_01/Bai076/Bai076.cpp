#include<iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap n = ";
	cin >> n;

	float s = 1 + x;
	float t = x;
	float m = 1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + t / m;
		i = i + 2;
	}
	cout << "S = " << s;
	return 1;
}