#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
int dem(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nSo luong cac gia tri phan biet trong mang la: " << dem(a, n);

	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

int dem(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == a[i])
				flag = false;
		}
		if (flag == true)
			dem++;
	}
	return dem;
}