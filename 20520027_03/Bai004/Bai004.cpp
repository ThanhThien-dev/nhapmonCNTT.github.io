#include<iostream>
#include<iomanip>
using namespace std;
void nhap(float[], int&);
void xuat(float[], int);

int main()
{
	float a[100];
	int n;
	nhap(a, n);
	xuat(a, n);

	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}

void xuat(float a[], int n)
{
	cout << "Mang ban dau la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(11);
	}
}