#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int&);
float tongduong(float[], int);
int demduong(float[], int);
float tbc(float[], int);

int main()
{
	float b[100];
	int k;
	int x;
	nhap(b, k);
	nhap(b, x);
	cout << k;
	cout << "Mang ban dau: ";
	xuat(b, k);

	cout << "\nTrung binh cong cac gia tri duong la: " << tbc(b, k);

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

void xuat(float a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << fixed << setprecision(2) << a[i];
	}
}

float tongduong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			s = s + a[i];
	}
	return s;
}

int demduong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			dem++;
	}
	return dem;
}

float tbc(float a[], int n)
{
	float s = tongduong(a, n);
	float d = demduong(a, n);
	if (d == 0)					//ko co so duong
		return 0;
	return s / d;
}

