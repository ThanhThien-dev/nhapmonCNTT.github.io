#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
void lietke(float[], int);
float amdau(float[], int);

int main()
{
	float b[100];
	int k;

	nhap(b, k);
	cout << "Mang ban dau: ";
	xuat(b, k);

	cout << "\nGia tri am dau tien:\n";
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


float amdau(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			return a[i];
	}
	return 0;
}

void lietke(float a[], int n)
{
	float ad = amdau(a, n);
	if (ad == 0)
	{
		cout << "Mang khong co gia tri am.";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ad)
			cout << setw(8) << i;
	}
}
