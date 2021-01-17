#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
void vitriam(float[],int);

int main()
{
	float b[100];
	int k;

	nhap(b, k);
	cout << "Mang ban dau: ";
	xuat(b, k);

	vitriam(b, k);
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

void vitriam(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if(a[i]<0)
			cout << setw(7) << fixed << setprecision(2) << i;
	}
}
