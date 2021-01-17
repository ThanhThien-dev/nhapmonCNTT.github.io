#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
void chantang(int[], int);
void letang(int[], int);
void hoanvi(int&, int&);
void tangdan(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nVi tri co gia tri chan va le tang dan:\n";
	tangdan(a, n);
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
			a[i] = rand() % 201;
		}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << a[i];
	}
}

void hoanvi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void chantang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j])
			{
				hoanvi(a[i], a[j]);
			}
		}
	}
}

void letang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j])
			{
				hoanvi(a[i], a[j]);
			}
		}
	}
}

void tangdan(int a[], int n)
{
	chantang(a, n);
	letang(a, n);
}