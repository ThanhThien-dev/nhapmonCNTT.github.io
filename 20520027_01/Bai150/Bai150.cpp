#include<iostream>
using namespace std;

int main()
{
	int a, b, m, n, kq;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	m = abs(a);
	n = abs(b);

	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	kq = (abs(a * b)) / (m + n);
	cout << "BCNN cua a va b la: " << kq;
	return 1;
}