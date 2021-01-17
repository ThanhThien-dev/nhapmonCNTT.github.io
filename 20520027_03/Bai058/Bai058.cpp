#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float lonnhat(float[], int);
float dem(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nSo luong gia tri lon nhat la: " << dem(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		//a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << fixed << setprecision(2) << a[i];
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

float dem(float a[], int n)
{
	float dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == lonnhat(a, n))
			dem++;
	}
	return dem;
}