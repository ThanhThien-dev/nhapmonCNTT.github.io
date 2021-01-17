#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
int tansuat(int[], int, int);
void lietke(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nCac gia tri chi xuat hien 1 lan trong mang:\n";
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
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

int tansuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

void lietke(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (tansuat(a, n, a[i]) == 1)
			cout << a[i] << setw(8);
	}
}
