#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
int dem(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nSo luong phan tu cuc tri la: " << dem(a, n);

	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	int luachon;
	srand(std::time(nullptr));
	cout << "\nNhap lua chon (1) hoac (2):";
	cout << "\n(1). Nhap tay";
	cout << "\n(2). Chay tu dong";
	cout << "\n====> ";
	cin >> luachon;

	if (luachon == 1)
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	if (luachon == 2)
		for (int i = 0; i < n; i++)
		{
			a[i] = -100 + rand() / (RAND_MAX / 200.0);
		}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(2) << a[i];
	}
}

int dem(float a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return -1;

	if (a[0] > a[1] || a[0] < a[1])
		dem++;

	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > a[i + 1] && a[i] > a[i - 1] || a[i] < a[i + 1] && a[i] < a[i - 1])
			dem++;
	}

	if (a[n - 2] > a[n - 1] || a[n - 2] < a[n - 1])
		dem++;
	return dem;
}
