#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float tong(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nTong cac gia tri lon hon cac gia tri xung quanh: " << tong(a, n);

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
		cout << setw(6) << fixed << setprecision(2) << a[i];
	}
}

float tong(float a[], int n)
{
	float s = 0;
	if (n <= 1)
		return 0;

	if ((a[0] > a[1])|| (a[0] < a[1]))
		s += a[0];

	for (int i = 1; i <= n - 2; i++)
	{
		if ((a[i] > a[i + 1] && a[i] > a[i - 1]) || (a[i] < a[i + 1] && a[i] < a[i - 1]))
			s += a[i];
	}

	if ((a[n - 1] > a[n - 2])||(a[n - 1] < a[n - 2]))
		s += a[n - 1];
	return s;
}