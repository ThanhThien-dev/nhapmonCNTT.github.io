#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
void lietke(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nGia tri co it nhat 1 gia tri lan can trai dau:\n";
	lietke(a, n);

	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << fixed << setprecision(2) << a[i];
	}
}

void lietke(float a[], int n)
{
	if (n <= 1)
		return;
	if (a[0] * a[1] < 0)
		cout << a[0] << setw(10);
	for (int i = 1; i <= n-2; i++)
	{
		if (a[i] * a[i + 1] < 0 || a[i] * a[i - 1] < 0)
			cout << a[i] << setw(10);
	}
	if (a[n - 1] * a[n - 2] < 0)
		cout << a[n - 1] << setw(10);
}