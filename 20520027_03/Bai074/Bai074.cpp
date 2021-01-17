#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float gtnn(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nVi tri cua gia tri nho nhat trong mang la: " << gtnn(a, n);

	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
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

float gtnn(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > lc)
			lc = i;
	}
	return lc;
}
