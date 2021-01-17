#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
int chan(int[], int);
int chanln(int[], int);
void lietke(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nVi tri cua so chan lon nhat trong mang:\n";
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

int chan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		return a[i];
	}
	return 0;
}

int chanln(int a[], int n)
{
	
	int lc = chan(a, n);
	if (lc == 0)
		return 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] > lc)
			lc = a[i];
	}
	return lc;
}

void lietke(int a[], int n)
{
	int cln = chanln(a, n);
	if (cln == 0)
		cout << "\nKhong co so chan\n";

	for (int i = 0; i < n; i++)
	{
		if (a[i] == cln)
			cout << i;
	}
}
