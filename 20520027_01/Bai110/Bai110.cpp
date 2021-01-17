#include <iostream>
using namespace std;

int main()
{
	float s = 0;
	int dau = 1;
	float e = 1;
	float i = 1;
	while (e >= pow(10, -6))
	{
		e = 4.0 / i;
		s = s + e;
		dau = -dau;
		i = i + 2;
	}
	cout << "S = " << s;
	return 1;
}