#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap x: ";
	float x, s;
	cin >> x;

	if (x >= 0)
	{
		if (x > 1)
			s = 2 * x * x * x + 5 * x * x - 8 * x + 3;
		else
			s = 5 * x - 7;
	}
	else
		s = (-2) * x * x * x + 6 * x + 9;
	cout << "f(" << x << ") = " << s;
	return 1;
}