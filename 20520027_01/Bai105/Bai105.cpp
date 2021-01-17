#include <iostream>
using namespace std;

int main()
{
	float s = 0;
	float m = 0;
	float e = 1;
	float i = 1;
	while (e >= pow(10, -6))
	{
		m = m + i;
		e = 1 / m;
		s = s + e;
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}