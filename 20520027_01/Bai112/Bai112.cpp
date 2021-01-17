#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	int n;
	cin >> n;

	n = 4 - 2 / 4 - 1 / 5 - 1 / 6;
	int i = 1;
	int m = 1;
	int e = 1;

	while (e>= pow(10,-6))
	{
		m = m * 16;
		e = (1 / m) * ((4 / (8 * i + 1)) - (2 / (8 * i + 4)) - (1 / (8 * i + 5)) - (1 / (8 * i + 6)));
		n = n + e;
		i++;
	}
	cout << "Pi bang: " << n;
	return 1;
}