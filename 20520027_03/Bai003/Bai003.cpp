#include<iostream>
#include<iomanip>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);

int main()
{
	int a[100];
	int n;
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 201 - 100;
	}
}

void xuat(int a[], int n)
{
	cout << "Mang ban dau la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(11);
	}
}
