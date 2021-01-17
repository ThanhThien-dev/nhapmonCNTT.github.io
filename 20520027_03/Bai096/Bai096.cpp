#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
int vitrichandau(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nVi tri chan dau tien cua mang: " << vitrichandau(a, n);

	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
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

int vitrichandau(int a[], int n)
{
	for (int i = 0; i <n; i++)
	{
		if (a[i] % 2 == 0)
			return i;
	}
	return -1;
}
