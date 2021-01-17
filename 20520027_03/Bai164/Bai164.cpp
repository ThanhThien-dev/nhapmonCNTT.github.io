#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
bool ktnt(int);
void xoa(int[], int&, int);
void xoant(int[], int&);


int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nMang da xoa so nguyen to:\n";
	xoant(a, n);
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

bool ktnt(int f)
{
	int dem = 0;
	for (int i = 1; i <= f; i++)
	{
		if (f % i == 0)
			dem++;
	}
	if (dem==2)
	{
		return true;
	}
	return false;
}

void xoa(int a[], int& n, int x)
{
	for (int i = x; i <= n - 2; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void xoant(int a[], int& n)
{
	for (int i = n-1; i >= 0; i--)
	{
		if (ktnt(a[i]))
			xoa(a, n, i);
	}
}

