#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
void xaydung(float[], int, float[], int&);


int main()
{
	float a[100], b[100];
	int n, k;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nTong cac gia tri lan can mang a cua mang b:\n";
	xaydung(a, n, b, k);
	return 0;
}

void nhap(float a[], int& n)
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
			a[i] = -100 + rand() / (RAND_MAX / 200.0);
		}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(2) << a[i];
	}
}

void xaydung(float a[], int n, float b[], int& k)
{
	if (n == 1) 
	{
		k = 1;
		b[0] = 0;
		cout << b[0];
		return;
	}

	k = n;
	b[0] = a[1];
	cout << b[0] << setw(10);
	for (int i = 1; i <= n-2; i++)
	{
		b[i] = a[i - 1] + a[i + 1];
		cout << b[i] << setw(10);
	}
	b[k - 1] = a[n - 2];
	cout << b[k-1] << setw(10);
}
