#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
void mangcon(int[], int, int, int);
void tatca(int[], int,int);

int main()
{
	int a[100];
	int n, l, vt;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nNhap l: ";
	cin >> l;
	
	cout << "\nMang con:\n";
	tatca(a, n, l);

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

void mangcon(int a[], int n, int l, int vt)
{
	for (int i = 0; i <= l - 1; i++)
	{
		cout << setw(10) << a[vt + i];
	}
}

void tatca(int a[], int n,int l)
{
	int vt = 0;
	for (; vt <= n-l; vt++)
	{
		for (int i = 0; i <= l-1; i++)
		{
			cout << setw(10) << a[vt + i];
		}
		cout << endl;
	}
}
