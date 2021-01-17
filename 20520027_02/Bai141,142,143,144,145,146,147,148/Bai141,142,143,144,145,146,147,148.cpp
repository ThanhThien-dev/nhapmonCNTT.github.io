#include<iostream>
using namespace std;
void nhap(int&);

int bai141(int);
int bai142(int);
int bai143(int);
int bai144(int);
int bai145(int);
int bai146(int);
int bai147(int);
int bai148(int);

int main()
{
	int n;
	nhap(n);

	cout << "BAI 141: \nChu so dau tien cua " << n << " la: " << bai141(n);

	cout << "\nBAI 142: \nSo dao nguoc cua " << n << " la: " << bai142(n);

	cout << "\nBAI 143:\n";
	int kq = bai143(n);
	if (kq == 1)
		cout << n << " la so hoan thien.";
	else
		cout << n << " khong phai so hoan thien.";

	cout << "\nBAI 144:\n";
	if(bai144(n)==1)
		cout << n << " la so nguyen to.";
	else
		cout << n << " khong phai so nguyen to.";

	cout << "\nBAI 145:\n";
	if (bai145(n) == 1)
		cout << n << " la so chinh phuong.";
	else
		cout << n << " khong phai so chinh phuong.";

	cout << "\nBAI 146:\n";
	if (bai146(n) == 1)
		cout << n << " la so doi xung.";
	else
		cout << n << " khong phai so doi xung.";

	cout << "\nBAI 147:\n";
	if (bai147(n) == 1)
		cout << n << " la so toan le.";
	else
		cout << n << " khong phai so toan le.";

	cout << "\nBAI 148:\n";
	if (bai148(n) == 1)
		cout << n << " la so toan chan.";
	else
		cout << n << " khong phai so toan chan.";

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int bai141(int n)
{
	int dt = abs(n);
	while (dt>=10)
	{
		dt = dt / 10;
	}
	return dt;
}

int bai142(int n)
{
	int dn = 0;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}

int bai143(int n)
{
	int i = 1;
	int s = 0;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i++;
	}
	if (s == n)
		return 1;
	return 0;
}

int bai144(int n)
{
	int dem = 0;
	int i = 1;
	while (i<=n)
	{
		if (n % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		return 1;
	return 0;
}

int bai145(int n)
{
	int flag = 0;
	int i = 1;
	while (i<=n)
	{
		if (i*i==n)
		{
			flag = 1;
		}
		i++;
	}
	if (flag == 1)
		return 1;
	return 0;
}

int bai146(int n)
{
	if (n == bai142(n))
		return 1;
	return 0;
}

int bai147(int n)
{
	int flag = 1;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		return 1;
	return 0;
}

int bai148(int n)
{
	int flag = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		return 1;
	return 0;
}