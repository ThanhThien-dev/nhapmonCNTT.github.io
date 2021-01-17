#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
void themvitri(int[], int&, int, int);

int main()
{
	int a[100];
	int n, k, x;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nNhap vi tri k: ";
	cin >> k;
	cout << "Nhap gia tri x: ";
	cin >> x;
	cout << "\nMang da them phan tu:\n";
	themvitri(a, n, k, x);
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

void themvitri(int a[], int& n, int k,int x)
{
	n++;
	for (int i = n; i >= k + 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
}
