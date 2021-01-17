#include<iostream>
using namespace std;
void nhap(int&);
int bai113(int);
int bai114(int);
int bai115(int);
int bai116(int);
int bai117(int);
float bai118(int);
float bai119(int);
float bai120(int);
int bai121(int);
void bai122(int);
void bai123(int);
void bai124(int);

int main()
{
	int n;
	nhap(n);
	cout << "BAI113:\na(" << n << "): " << bai113(n);
	cout << "\nBAI114:\na(" << n << "): " << bai114(n);
	cout << "\nBAI115:\na(" << n << "): " << bai115(n);
	cout << "\nBAI116:\na(" << n << "): " << bai116(n);
	cout << "\nBAI117:\na(" << n << "): " << bai117(n);
	cout << "\nBAI118:\na(" << n << "): " << bai118(n);
	cout << "\nBAI119:\na(" << n << "): " << bai119(n);
	cout << "\nBAI120:\na(" << n << "): " << bai120(n);
	cout << "\nBAI121:\nf(" << n << "): " << bai121(n);
	cout << "\nBAI122:\n";
		bai122(n);
	cout << "\nBAI123:\n";
		bai123(n);
	cout << "\nBAI124:\n";
		bai124(n);

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int bai113(int n)
{
	int ahh = 0;
	int at = 2;
	int i = 2;
	while (i<=n)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}

int bai114(int n)
{
	int ahh = 0;
	int at = -2;
	int x = 3;
	int y = 7;
	int i = 2;
	while (i<=n)
	{
		x = x * 3;
		y = y * 7;
		ahh = 5 * at + 2 * x - 6 * y + 12;
		i++;
		at = ahh;
	}
	return ahh;
}

int bai115(int n)
{
	int ahh = 0;
	int att = -1;
	int at = 3;
	int i = 2;
	while (i<=n)
	{
		ahh = 5 * at + 6 * att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}

int bai116(int n)
{
	int ahh = 0;
	int att = 1;
	int at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}

int bai117(int n)
{
	int ahh = 0;
	int at = 3;
	int att = -1;
	int x = 2;
	int i = 2;
	while (i<=n)
	{
		x = x * 2;
		ahh = 5 * x + 5 * at - att;
		att = at;
		at = ahh;
		i++;
	}
	return ahh;
}

float bai118(int n)
{
	float ahh = 0;
	float at = 2;
	int i = 2;
	while (i<=n)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		i++;
		at = ahh;
	}
	return ahh;
}

float bai119(int n)
{
	float ahh = 0;
	float at = 2;
	int i = 2;
	while (i<=n)
	{
		ahh = (float)(at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	return ahh;
}

float bai120(int n)
{
	float ahh = 0;
	float at = 2;
	int i = 2;
	while (i<=n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}
	return ahh;
}

int bai121(int n)
{
	int ahh = 0;
	int att = 1;
	int at = 1;
	int i = 2;
	while (i<=n)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}

void bai122(int n)
{
	int ahh = 0;
	int bhh = 0;
	int at = 1;
	int bt = 1;
	int i = 2;
	while (i<=n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu " << n << " cua a la: " << ahh;
	cout << "\nSo hang thu " << n << " cua b la: " << bhh;
}

void bai123(int n)
{
	int ahh = 0;
	int bhh = 0;
	int at = 2;
	int bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu " << n << " cua a la: " << ahh;
	cout << "\nSo hang thu " << n << " cua b la: " << bhh;
}

void bai124(int n)
{
	int ahh = 0;
	int bhh = 0;
	int at = 2;
	int bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu " << n << " cua a la: " << ahh;
	cout << "\nSo hang thu " << n << " cua b la: " << bhh;
}