#include<iostream>
#include<iomanip>
using namespace std;
void nhap(int&);
int bai151(int);
int bai152(int);
int bai153(int);
int bai154(int);
void xuat(int n);

int main()
{
	int n;
	nhap(n);
	cout << "BAI 151:\n";
	int kq1 = bai151(n);
	if (kq1 == 1)
		cout << n << " co dang 2^m";
	else
		cout << n << " khong co dang 2^m";

	cout << "\nBAI 152:\n";
	int kq2 = bai152(n);
	if (kq2 == 1)
		cout << n << " co dang 3^m";
	else
		cout << n << " khong co dang 3^m";

	cout << "\nBAI 153:\n";
	int kq3 = bai153(n);
	if (kq3 == 1)
		cout << n << " co dang 5^m";
	else
		cout << n << " khong co dang 5^m";

	cout << "\nBAI 154:\n";
	xuat(n);
	cout << "1";
	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int bai151(int n)
{
	int t = 1;
	int i = 1;
	while (t<n)
	{
		t = t * 2;
		if (t==n)
		{
			int m = i;
		}
		i++;
	}
	if (t == n)
		return 1;
	return 0;
}

int bai152(int n)
{
	int t = 1;
	int i = 1;
	while (t<n)
	{
		t = t * 3;
		if (t == n)
			int m = i;
		i++;
	}
	if (t == n)
		return 1;
	return 0;
}

int bai153(int n)
{
	int t = 1;
	int i = 1;
	while (t < n)
	{
		t = t * 5;
		if (t == n)
			int m = i;
		i++;
	}
	if (t == n)
		return 1;
	return 0;
}

int bai154(int n)
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
		n = bai154(n);
	}
}