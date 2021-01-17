#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
bool ktcp(int);
void xoa(int[], int&, int);
void xoacp(int[], int&);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nMang da xoa so chinh phuong:\n";
	xoacp(a, n);
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

bool ktcp(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

void xoa(int a[], int& n, int k)
{
	for (int i = k; i <= n-2; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void xoacp(int a[], int& n)
{
	for (int i = n-1; i >= 0; i--)
	{
		if (ktcp(a[i]))
		{
			xoa(a,n,i);
		}
	}
}
