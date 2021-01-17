#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	float i = 2;
	while (i <= n)
	{
		s = pow(sqrt(s + i),(1/i));
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}