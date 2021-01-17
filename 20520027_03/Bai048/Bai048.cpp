#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int&);
float tichduong(float[], int);
int demduong(float[], int);
float tbn(float[], int);

int main()
{
	float b[100];
	int k;
	nhap(b, k);
	
	cout << "Mang ban dau: ";
	xuat(b, k);

	cout << "\nTrung binh nhan cac gia tri duong la: " << tbn(b, k);

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

float tichduong(float a[], int n)
{
	float t = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			t = t * a[i];
	}
	return t;
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

float tbn(float a[], int n)
{
	float t = tichduong(a, n);
	float d = demduong(a, n);
	if (d == 0)
		return 0;
	return pow(t, (float)1 / d);
}

