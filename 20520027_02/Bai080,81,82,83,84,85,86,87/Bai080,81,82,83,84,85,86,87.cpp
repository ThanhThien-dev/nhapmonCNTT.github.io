#include<iostream>
using namespace std;
void nhap(int&, int&);
int bai80(int, int);
float bai81(int, int);
float bai82(int, int);
float bai83(int, int);
float bai84(int, int);
int bai85(int, int);
int bai86(int, int);
int bai87(int, int);

int main()
{
	int x, n;
	nhap(x, n);
	cout << "BAI 80:\nS = " << bai80(x, n);
	cout << "\nBAI 81:\nS = " << bai81(x, n);
	cout << "\nBAI 82:\nS = " << bai82(x, n);
	cout << "\nBAI 83:\nS = " << bai83(x, n);
	cout << "\nBAI 84:\nS = " << bai84(x, n);
	cout << "\nBAI 85:\nS = " << bai85(x, n);
	cout << "\nBAI 86:\nS = " << bai86(x, n);
	cout << "\nBAI 87:\nS = " << bai87(x, n);

	return 1;
}

void nhap(int& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}

int bai80(int x, int n)
{
	int s = 1;
	int element = 1;
	int i = 2;
	while (i <= n + 1)
	{
		element = element * x;
		s = s + i * element;
		i++;
	}
	return s;
}

float bai81(int x, int n)
{
	float s = (float)1 / x;
	float m = x;
	int i = 1;
	while (i<=n)
	{
		m = m * (x + i);
		s = s + (float)1 / m;
		i++;
	}
	return s;
}

float bai82(int x, int n)
{
	//element(e): Phan tu
	float s = 0;
	float e = 1;
	int i = 1;
	while (i<=n)
	{
		e = e * sin(x);
		s = s + e;
		i++;
	}
	return s;
}

float bai83(int x, int n)
{
	float s = 0;
	float e = 1;
	int i = 1;
	while (i<=n)
	{
		e = e * x;
		s = s + sin(e);
		i++;
	}
	return s;
}

float bai84(int x, int n)
{
	float s = 0;
	float e = x;
	int i = 1;
	while (i<=n)
	{
		e = sin(e);
		s = s + e;
		i++;
	}
	return s;
}

int bai85(int x, int n)
{
	int s = 0;
	int e = 1;
	int i = 1;
	int dau = 1;
	while (i<=n)
	{
		e = e * x;
		s = s + dau*e;
		i++;
		dau = -dau;
	}
	return s;
}

int bai86(int x, int n)
{
	int s = 0;
	int e = 1;
	int i = 2;
	int dau = -1;
	while (i<=2*n)
	{
		e = e * x * x;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}

int bai87(int x, int n)
{
	int s = x;
	int e = x;
	int i = 3;
	int dau = -1;
	while (i <= 2 * n + 1)
	{
		e = e * x * x;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
