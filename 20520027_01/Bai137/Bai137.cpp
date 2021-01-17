#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap x: ";
	float x, s;
	cin >> x;

	s = 0;
	if (x >= 5)
		s = 2 * x * x + 5 * x + 9;
	else
		s = (-2) * x * x + 4 * x - 9;
	cout << "f(" << x << ") = " << s;
	return 1;
}