#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float lonnhat(float[], int);
void lietke(float[], int);

int main()
{
	float b[100];
	int k;

	nhap(b, k);
	cout << "Mang ban dau: ";
	xuat(b, k);

	cout << "\nCac vi tri cua gia tri lon nhat: ";
	lietke(b, k);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << fixed << setprecision(2) << a[i];
	}
}

float lonnhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > lc)
			lc = a[i];
	}
	return lc;
}

void lietke(float a[], int n)
{
	float kq = lonnhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == kq)
			cout << i << setw(6);
	}
}
