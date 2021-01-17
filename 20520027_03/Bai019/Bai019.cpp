#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float nhonhat(float[], int);
void lietke(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	lietke(a, n);
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
		cout << setw(10) << fixed << setprecision(2) << a[i];
	}
}

float nhonhat(float a[], int n)
{
	int lc = 0;
	cout << "\nVi tri co gia tri nho nhat:\n";
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= a[lc])
			lc = i;
	}
	return a[lc];
}

void lietke(float a[], int n)
{
	float lc = nhonhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == lc)
			cout << i;
	}
}
