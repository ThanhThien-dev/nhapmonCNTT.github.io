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
	xuat(a, n);
	cout << "\nCac phan tu chan le 2 hang:\n";
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
		a[i] = rand() % 201 - 100;
	}
}

void xuat(int a[], int n)
{
	cout << "Mang ban dau la:\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(6);
	}
}

void lietke(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			cout << setw(6) << a[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			cout << setw(6) << a[i];
	}
}
