#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
bool ktnt(int);
void hoanvi(int&, int&);
void vttangdan(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nVi tri so nguyen to trong mang co gia tri tang dan:\n";
	vttangdan(a, n);
	xuat(a, n);

	return 0;
}

void nhap(int a[], int& n)
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
			a[i] = rand() % 201;
		}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << a[i];
	}
}

bool ktnt(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

void hoanvi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}


void vttangdan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ktnt(a[i]) && ktnt(a[j]) && a[i] > a[j])
				hoanvi(a[i], a[j]);
		}
	}
}
