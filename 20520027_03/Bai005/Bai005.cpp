#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);

void lietke(int[], int);

int main()
{
	int b[100];
	int k;

	nhap(b, k);
	cout << "Mang ban dau: ";
	xuat(b, k);

	cout << "\nGia tri chan trong mang: ";
	lietke(b, k);

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

void lietke(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		cout << a[i] << setw(6);
	}
}