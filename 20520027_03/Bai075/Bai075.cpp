#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float xanhat(float[], int, int);

int main()
{
	float a[100];
	int n,x;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nGia tri xa gia tri x nhat: " << xanhat(a, n, x);

	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
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
		cout << setw(10) << fixed << setprecision(2) << a[i];
	}
}

float xanhat(float a[], int n,int x)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
	{
		if (abs(a[i] - x) > abs(lc - x))
			lc = a[i];
	}
	return lc;
}
