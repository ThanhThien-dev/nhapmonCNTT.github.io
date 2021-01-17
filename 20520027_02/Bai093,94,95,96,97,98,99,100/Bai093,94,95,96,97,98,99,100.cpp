#include<iostream>
using namespace std;
void nhap(int&);
float bai93(int);
float bai94(int);
float bai95(int);
float bai96(int);
float bai97(int,int);
float bai98(int);
float bai99(int);
float bai100(int);

int main()
{
	int x,n;
	cout << "Nhap x: ";
	cin >> x;
	nhap(n);
	cout << "BAI 93:\nS = " << bai93(n);
	cout << "\nBAI 94:\nS = " << bai94(n);
	cout << "\nBAI 95:\nS = " << bai95(n);
	cout << "\nBAI 96:\nS = " << bai96(n);
	cout << "\nBAI 97:\nS = " << bai97(x,n);
	cout << "\nBAI 98:\nS = " << bai98(n);
	cout << "\nBAI 99:\nS = " << bai99(n);
	cout << "\nBAI 100:\nS = " << bai100(n);

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

float bai93(int n)
{
	float s = 0;
	int i = 1;
	while (i<=n)
	{
		s = sqrt(s + 2);
		i++;
	}
	return s;
}

float bai94(int n)
{
	float s = 0;
	int i = 1;
	while (i<=n)
	{
		s = sqrt(s+i);
		i++;
	}
	return s;
}

float bai95(int n)
{
	float s = 0;
	int i = n;
	while (1<=i)
	{
		s = sqrt(s + i);
		i--;
	}
	return s;
}

float bai96(int n)
{
	float s = 0;
	int e = 1;
	int i = 1;
	while (i<=n)
	{
		e = e * i;
		s = sqrt(s + e);
		i++;
	}
	return s;
}

float bai97(int x, int n)
{
	float s = 0;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * x;
		s = sqrt(s + t);
		i++;
	}
	return s;
}

float bai98(int n)
{
	float s = 0;
	int i = 2;
	while (i<=n)
	{
		s = pow((sqrt(s + i)), i);
		i++;
	}
	return s;
}

float bai99(int n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = pow((sqrt(s + i)), i+1);
		i++;
	}
	return s;
}

float bai100(int n)
{
	float s = 0;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * i;
		s = pow(sqrt(t + s), i + 1);
		i++;
	}
	return s;
}
