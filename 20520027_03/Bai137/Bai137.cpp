#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
void hoanvi(float&, float&);
void tangdan(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nMang tang dan:\n";
	tangdan(a, n);
	xuat(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	int luachon;
	srand(std::time(nullptr));
	cout << "\nNhap lua chon (1) hoac (2):";
	cout << "\n(1). Nhap tay";
	cout << "\n(2). Chay tu dong";
	cout << "\n====> ";
	cin >> luachon;

	if (luachon == 1)
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	if (luachon == 2)
		for (int i = 0; i < n; i++)
		{
			a[i] = -100 + rand() / (RAND_MAX / 200.0);
		}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(2) << a[i];
	}
}

void hoanvi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void tangdan(float a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
				hoanvi(a[i], a[j]);
		}
	}
}