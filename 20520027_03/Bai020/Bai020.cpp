#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void nhap(float[], int&);
void xuat(float[], int);
void lietke(float[], int);

int main()
{
	float a[50];
	int n;
	nhap(a, n);
	xuat(a, n);
	cout << "\nPhan tu cuc tieu cua mang:\n";
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
	cout << "Mang ban dau la:\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << fixed << setprecision(2) << setw(10);
	}
}

void lietke(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] < a[1])
		cout << a[0];
	if (a[n - 1] < a[n - 2])
		cout << a[n - 1];
	for (int i = 1; i <= n-2; i++)
	{
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << a[i];
	}
}
