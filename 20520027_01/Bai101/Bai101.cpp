#include <iostream>
using namespace std;

int main()
{
	float s = 0;
	float i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		e = 1 / i;
		s = s + e;
		i++;
	}
	cout << "S = " << s;
	return 1;
}