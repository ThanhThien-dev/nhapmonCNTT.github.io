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
	cout << "\nCac phan tu cuc dai:\n";
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
	if (n < 1)
		return;
	if (n == 1)
		cout << a[n] << setw(11);

	if (a[0] > a[1] || a[0] < a[1])
		cout << a[0] << setw(11);

	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > a[i + 1] && a[i] > a[i - 1] || a[i] < a[i + 1] && a[i] < a[i - 1])
			cout << a[i] << setw(11);
	}

	if (a[n - 1] > a[n - 2] || a[n - 1] < a[n - 2])
		cout << a[n - 1] << setw(11);
}