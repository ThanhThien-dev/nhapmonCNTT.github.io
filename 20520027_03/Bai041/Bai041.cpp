#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float lietke(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nTong cac gia tri lon hon gia tri lien truoc: " << lietke(a, n);

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
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << fixed << setprecision(2) << a[i];
	}
}

float lietke(float a[], int n)
{
	float s = 0;
	if (n <= 1)
		return 0;

	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] > a[i - 1])
			s += a[i];
	}
	return s;
}
