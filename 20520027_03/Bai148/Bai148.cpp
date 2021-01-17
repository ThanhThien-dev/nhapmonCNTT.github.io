#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float lonnhat(float[], int);
float nhonhat(float[], int);
void biendoi(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nHoan doi 2 gia tri lon nhat va nho nhat:\n";
	biendoi(a, n);
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

float nhonhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < lc)
			lc = a[i];
	}
	return lc;
}

void biendoi(float a[], int n)
{
	float ln = lonnhat(a, n);
	float nn = nhonhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ln || a[i] == nn)
			a[i] = ln + nn - a[i];
	}
}
