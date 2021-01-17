#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
int demchan(int[], int);
int demle(int[], int);
void sosanh(int[], int);

int main()
{
	int a[100];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la:";
	xuat(a, n);

	cout << "\nSo sanh so luong chan va le trong mang:";
	sosanh(a, n);

	return 1;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nChon (1) hoac (2):";
	cout << "\n(1) Nhap tay";
	cout << "\n(2) Chay tu dong";
	cout << "\n====>";
	int chon;
	cin >> chon;

	if (chon == 1)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}

	if (chon == 2)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 201 - 100;
		}
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int demchan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			dem++;
	}
	return dem;
}

int demle(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			dem++;
	}
	return dem;
}

void sosanh(int a[], int n)
{
	if (demchan(a, n) > demle(a, n))
		cout << "\nSo luong chan nhieu hon so luong le.";
	if (demchan(a, n) == demle(a, n))
		cout << "\nSo luong chan bang so luong le.";
	if (demchan(a, n) < demle(a, n))
		cout << "\nSo luong chan it hon so luong le.";
}
