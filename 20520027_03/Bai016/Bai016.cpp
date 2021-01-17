#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
void lietke(int[], int, int, int);

int main()
{
	int b[100];
	int k;

	nhap(b, k);
	cout << "Mang ban dau: ";
	xuat(b, k);

	int x, y;
	cout << "\nx = ";
	cin >> x;
	cout << "y =  ";
	cin >> y;
	cout << "Cac gia tri chan thuoc doan [" << x << " , " << y << "]: ";
	lietke(b, k, x, y);

	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << fixed << setprecision(2) << a[i];
	}
}

void lietke(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
	{
		if (x <= a[i] && a[i] <= y)
			if (a[i] % 2 == 0)
				cout << a[i] << setw(6);
	}
}
