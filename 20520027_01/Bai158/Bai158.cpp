#include<iostream>
using namespace std;

int main()
{
	int n, b, t, dv, dem, lc;
	cout << "Nhap n: ";
	cin >> n;

	dem = 0;
	lc = n % 10;
	t = n;
	while (t!=0)
	{
		dv = t % 10;
		if (dv>=lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	b = n;
	while (b!=0)
	{
		dv = b % 10;
		if (dv==lc)
		{
			dem++;
		}
		b = b / 10;
	}
	cout << "So luong chu so lon nhat cua " << n << " la: " << dem;
	return 1;
}