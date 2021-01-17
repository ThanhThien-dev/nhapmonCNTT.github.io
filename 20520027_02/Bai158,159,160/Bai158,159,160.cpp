#include<iostream>
using namespace std;
void nhap(int&);
int bai158(int);
int bai159(int);
int bai160(int);

int main()
{
	int n;
	nhap(n);

	cout << "BAI 158:\nSo luong chu so lon nhat la: " << bai158(n);
	cout << "\nBAI 159:\nSo luong chu so nho nhat la: " << bai159(n);
	cout << "\nBAI 160:\nSo luong chu so dau tien la: " << bai160(n);

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int bai158(int n)
{
	int dem = 0;
	int ln = n % 10;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv >= ln)
			ln = dv;
		t = t / 10;
	}
	int b = n;
	while (b!=0)
	{
		int dv = b % 10;
		if (dv == ln)
			dem++;
		b = b / 10;
	}
	return dem;
}

int bai159(int n)
{
	int lc = n % 10;
	int dem = 0;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;;
		if (dv <= lc)
			lc = dv;
		t = t / 10;
	}
	int b = n;
	while (b!=0)
	{
		int dv = b % 10;
		if (dv == lc)
			dem++;
		b = b / 10;
	}
	return dem;
}

int bai160(int n)
{
	int dem = 0;
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;

	int b = n;
	while (b!=0)
	{
		int dv = b % 10;
		if (dv == dt)
			dem++;
		b = b / 10;
	}
	return dem;
}
