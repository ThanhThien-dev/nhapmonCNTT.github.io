#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
void sochan(int[], int);
void hamxoa(int[], int&, int);
void xoachan(int[], int&);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nSo chan:\n";
	sochan(a, n);
	cout << "\nMang da xoa cac gia tri chan:\n";
	xoachan(a, n);
	xuat(a, n);

	return 0;
}

void nhap(int a[], int& n)
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
			a[i] = rand() % 201 - 100;
		}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << a[i];
	}
}

void sochan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			cout << a[i] << setw(10);
	}
}

void hamxoa(int a[], int& n, int x)
{
	for (int i = x; i <= n-2; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void xoachan(int a[], int& n)
{
	for (int i = n-1; i >= 0; i--)
	{
		if (a[i] % 2 == 0)
			hamxoa(a, n, i);
	}
}
