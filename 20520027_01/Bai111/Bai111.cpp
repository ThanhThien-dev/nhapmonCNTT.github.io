#include <iostream>
using namespace std;

int main()
{
	float s = 3;
	float e = 1;
	int dau = 1;
	float i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "Pi = " << s;
	return 1;
}