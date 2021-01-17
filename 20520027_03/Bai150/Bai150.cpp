#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
void vedaumang(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nNguyen hoa cac gia tri trong mang:\n";
	vedaumang(a, n);
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
			a[i] = -100 + rand() / (RAND_MAX / 200.0);
		}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(2) << a[i];
	}
}

void vedaumang(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 29)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
	}
}
