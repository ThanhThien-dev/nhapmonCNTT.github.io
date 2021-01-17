#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	float s = 1;
	float t = 1;
	float m = 1;
	float e = 1;
	float i = 1;
	while (e >= pow(10, -6))
	{
		t = t * x;
		m = m * i;
		e = t / m;
		s = s + e;
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}