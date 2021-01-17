#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
int kt(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nTrang thai ton tai gia tri 0: " << kt(a, n);
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
			a[i] = rand() % 201 - 100;
		}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << a[i];
	}
}

int kt(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			flag = 0;
	}
	if (flag == 0)
		return 1;
	return 0;
}
