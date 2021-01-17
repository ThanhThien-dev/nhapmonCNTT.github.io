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
	cout << "\nTung doi mot voi dk i<j:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] != a[j] && a[i] <= a[j])
				cout << "(" << a[i] << " , " << a[j] << ")"<<setw(10);
		}
	}
}
