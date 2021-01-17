#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(float[], int&);
void xuat(float[], int);
float tong(float[], int);

int main()
{
	float a[50];
	int n;
	nhap(a, n);
	xuat(a, n);

	cout << "\nTong cua cac phan tu trong mang bang: " << tong(a, n);


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
		cout << fixed << setprecision(2) << a[i] << setw(10);
	}
}

float tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i];
	}
	return s;
}
