#include<iostream>
using namespace std;

int main()
{
	int n, t, dv, dem, dt;
	cout << "Nhap n: ";
	cin >> n;

	dt = 1;
	dem = 0;
	t = abs(n);
	while (t>=10)
	{
		dt = t / 10;
		t = dt;
	}

	int b = n;
	while (b!=0)
	{
		dv = b % 10;
		if (dv==dt)
		{
			dem++;
		}
		b = b / 10;
	}
	cout << "So luong chu so dau tien cua " << n << " la: " << dem;
	return 1;
}