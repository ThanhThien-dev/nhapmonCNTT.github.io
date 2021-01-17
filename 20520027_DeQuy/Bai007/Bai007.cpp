#include<iostream>
using namespace std;
long tinhxn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tinhxn(n);
	cout << "Ket qua la: " << kq;
	return 1;
}

long tinhxn(int n)
{
	if (n == 0)
		return 1;
	long s = 0;
	for (int i = 0; i < n; i++)
	{
		long xi = tinhxn(i);
		s = s + (n - i) * (n - i) * xi;
	}
	return s;
}
