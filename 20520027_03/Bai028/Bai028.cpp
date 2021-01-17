#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
void lietke(float[], int);
float duongdau(float[], int);
float duongnn(float[], int);

int main()
{
	float b[100];
	int k;

	nhap(b, k);
	cout << "Mang ban dau: ";
	xuat(b, k);

	cout << "\nGia tri duong nho nhat:\n";
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


float duongdau(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			return a[i];
	}
	return -1;
}

float duongnn(float a[], int n)
{
	float lc = duongdau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < lc && a[i]>0)
			lc = a[i];
	}
	return lc;
}

void lietke(float a[], int n)
{
	float dd = duongnn(a, n);
	if (dd == -1)
	{
		cout << "Mang khong co gia tri duong.";
		return;
	}
	for (int i = 0; i < n; i++)
		if (a[i] == dd)
			cout << i;
}
