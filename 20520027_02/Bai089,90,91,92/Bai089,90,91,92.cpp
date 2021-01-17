#include<iostream>
using namespace std;
void nhap(int&, int&);
float bai89(int, int);
float bai90(int, int);
float bai91(int, int);
float bai92(int, int);

int main()
{
	int x, n;
	nhap(x, n);

	cout << "BAI 89:\nS = " << bai89(x, n);
	cout << "\nBAI 90:\nS = " << bai90(x, n);
	cout << "\nBAI 91:\nS = " << bai91(x, n);
	cout << "\nBAI 92:\nS = " << bai92(x, n);

	return 1;
}

void nhap(int& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}

float bai89(int x, int n)
{
	float s = 0;
	int t = 1;
	int m = 0;
	int i = 1;
	int dau = -1;
	while (i<=n)
	{
		t = t * x;
		m = m + i;
		s = s + (float)(dau * t) / m;
		i++;
		dau = -dau;
	}
	return s;
}

float bai90(int x, int n)
{
	float s = 0;
	int t = 1;
	int m = 1;
	int i = 1;
	int dau = -1;
	while (i<=n)
	{
		t = t * x;
		m = m * i;
		s = s + (float)(dau * t) / m;
		i++;
		dau = -dau;
	}
	return s;
}

float bai91(int x, int n)
{
	float s = -1;
	int t = 1;
	int m = 1;
	int i = 2;
	int dau = 1;
	while (i<=2*n)
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + (float)(dau * t) / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}

float bai92(int x, int n)
{
	float s = 1 - x;
	int t = x;
	int m = 1;
	int i = 3;
	int dau = 1;
	while (i<=2*n+1)
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + (float)(dau * t) / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
