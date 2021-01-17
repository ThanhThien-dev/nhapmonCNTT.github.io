#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
void lietke(float[], int, float, float);

int main()
{
	float b[100];
	int k;

	nhap(b, k);
	cout << "Mang ban dau: ";
	xuat(b, k);

	float x, y;
	cout << "\nx = ";
	cin >> x;
	cout << "y =  ";
	cin >> y;
	cout << "Cac gia tri thuoc doan [" << x << " , " << y << "]: ";
	lietke(b, k, x, y);

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
		cout << setw(7) << fixed << setprecision(2) << a[i];
	}
}

void lietke(float a[], int n, float x, float y)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= x && a[i] <= y)
		cout << setw(7) << fixed << setprecision(2) << a[i];
	}
}
