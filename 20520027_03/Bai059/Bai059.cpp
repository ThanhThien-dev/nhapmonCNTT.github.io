#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
int dem(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nSo luong cac phan tu ke nhau ma ca 2 deu chan: " << dem(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 201 - 100;
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

int dem(int a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return 0;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		dem++;
	for (int i = 1; i < n-1; i++)
	{
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				dem++;
	}
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		dem++;
	return dem;
}