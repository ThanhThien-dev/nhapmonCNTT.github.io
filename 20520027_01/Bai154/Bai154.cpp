#include<iostream>
using namespace std;

int Hailstone(int n);
void xuat(int n);

int main()
{
	int n;
	cin >> n;
	xuat(n);
	cout << "1";
	return 0;
}

int Hailstone(int n)
{
	if (n % 2 == 0)
		return n / 2;
	else
		return n * 3 + 1;
}

void xuat(int n)
{
	while (n > 1)
	{
		cout << n << " ";
		n = Hailstone(n);
	}
}