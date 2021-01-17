#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&, float&);
void xuat(float[], int);
float dem(float[], int, float);

int main()
{
	float a[100];
	int n;
	float x;

	nhap(a, n, x);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nSo lan xuat hien cua x: " << dem(a, n, x);
	return 0;
}

void nhap(float a[], int& n, float& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		/*a[i] = -100 + rand() / (RAND_MAX / 200.0);*/
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << fixed << setprecision(2) << a[i];
	}
}

float dem(float a[], int n, float x)
{
	float dem = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i] == x)
			dem++;
	}
	return dem;
}
