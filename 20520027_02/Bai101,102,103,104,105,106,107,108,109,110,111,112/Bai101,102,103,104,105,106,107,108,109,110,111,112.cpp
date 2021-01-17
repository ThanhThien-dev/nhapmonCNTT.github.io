#include<iostream>
using namespace std;
float bai101(int);
float bai102(int);
float bai103(int);
float bai104(int);
float bai105(int);
double bai106(int);
double bai107(int);
//float bai108(int,int);
float bai109(int);
float bai110(int);
float bai111(int);
float bai112(int);

int main()
{
	int n=rand();
	
	cout << "BAI 101:\nS = " << bai101(n);
	cout << "\nBAI 102:\nS = " << bai102(n);
	cout << "\nBAI 103:\nS = " << bai103(n);
	cout << "\nBAI 104:\nS = " << bai104(n);
	cout << "\nBAI 105:\nS = " << bai105(n);
	cout << "\nBAI 106:\nsin(x) = " << bai106(n);
	cout << "\nBAI 107:\ncos(x) = " << bai107(n);
	/*int e, x;
	cout << "\nNhap e: ";
	cin >> e;
	cout << "Nhap x: ";
	cin >> x;
	cout << "\nBAI 108:\npow(e,x) = " << bai108(e,x);*/
	cout << "\nBAI 109:\ne = " << bai109(n);
	cout << "\nBAI 110:\nPI = " << bai110(n);
	cout << "\nBAI 111:\nPI = " << bai111(n);
	cout << "\nBAI 112:\nPI = " << bai112(n);

	return 1;
}

float bai101(int n)
{
	float s = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 1.0 / i;
		s = s + e;
		i++;
	}
	return s;
}

float bai102(int n)
{
	float s = 0;
	int i = 2;
	float e = 1;
	while (e>=pow(10,-6))
	{
		e = 1.0 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}

float bai103(int n)
{
	float s = 0;
	int i = 1;
	float e = 1;
	while (e>=pow(10,-6))
	{
		e = 1.0 / i;
		s = s + e;
		i += 2;
	}
	return s;
}

float bai104(int n)
{
	float s = 0;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		e = 1.0 / (i * (i + 1));
		s = s + e;
		i++;
	}
	return s;
}

float bai105(int n)
{
	float s = 0;
	int m = 0;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		m = m + i;
		e = 1.0 / m;
		s = s + e;
		i++;
	}
	return s;
}

double bai106(int x)
{
	float r = x * 3.14 / 180;
	double s = x;
	int t = x;
	int m = 1;
	int i = 3;
	double e = 1;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		e = (float)t / m;
		s = (s + e) * dau;
		i = i + 2;
		dau = -dau;
	}
	return s;
}

double bai107(int x)
{
	float r = x * 3.14 / 180;
	double s = 1;
	int t = 1;
	int m = 1;
	int i = 2;
	double e = 1;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		e = (float)t / m;
		s = (s + e) * dau;
		i = i + 2;
		dau = -dau;
	}
	return s;
}

//float bai108(int e, int x)
//{
//	float s = 1;
//	int t = 1;
//	int m = 1;
//	float b = 1;
//	int i = 1;
//	while (x >= pow(10, -6))
//	{
//		t = t * e;
//		m = m * i;
//		b = (float)t / m;
//		s = s + b;
//		i++;
//	}
//	return s;
//}

float bai109(int n)
{
	float s = 0;
	float e = 1;
	int m = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		s = s + e;
		i++;
	}
	return s;
}

float bai110(int n)
{
	float s = 0;
	float e = 1;
	int i = 1;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		e = 4.0 / i;
		s = dau*(s + e);
		i = i + 2;
		dau = -dau;
	}
	return s;
}

float bai111(int n)
{
	float s = 3;
	float e = 1;
	int i = 2;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		e = 4.0 / (i * (i + 1) * (i + 2));
		s = dau * (s + e);
		i = i + 2;
		dau = -dau;
	}
	return s;
}

float bai112(int n)
{
	float pi = 4 - 2.0 / 4 - 1.0 / 5 - 1.0 / 6;
	int i = 1;
	int m = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		m = m * 16;
		e = 1.0 / m * (4.0 / (8 * i + 1) - 2.0 / (8 * i + 4) - 1.0 / (8 * i + 5) - 1.0 / (8 * i + 6));
		pi = pi + e;
		i++;
	}
	return pi;
}
