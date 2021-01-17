#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
void lietke(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nCac gia tri chan co it nhat 1 lan can cung chan:\n";
	lietke(a, n);

	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = (rand() % 201) - 100;
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(6);
	}
}

void lietke(int a[], int n)
{
	if (n <= 1)
		return;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << a[0] << setw(10);
	if (a[n - 2] % 2 == 0 && a[n - 1] % 2 == 0)
		cout << a[n - 1] << setw(10);
	for (int i = 1; i <= n-2; i++)
	{
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				cout << a[i] << setw(10);
	}
}


