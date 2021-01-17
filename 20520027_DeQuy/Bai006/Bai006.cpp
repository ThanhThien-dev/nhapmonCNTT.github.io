#include<iostream>
using namespace std;
long tinhxn(int);
long tinhyn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = tinhxn(n);
	cout << "\nKet qua x la: " << kq;
	int kq2 = tinhyn(n);
	cout << "\nKet qua y la: " << kq2;
	return 1;
}

long tinhxn(int n)
{
	if (n == 0)
		return 1;
	long a = tinhxn(n - 1);
	long b = tinhyn(n - 1);
	return (a + b);
}

long tinhyn(int n)
{
	if (n == 0)
		return 0;
	long a = tinhxn(n - 1);
	long b = tinhyn(n - 1);
	return (3 * a + 2 * b);
}