#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
bool kthoanthien(int);
int kiemtra(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "\nMang ban dau: ";
	xuat(a, n);
	cout << "\nTrang thai kiem tra so hoan thien lon hon 256: " << kiemtra(a, n);

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

bool kthoanthien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s += i;
	}
	if (s == n)
		return true;
	return false;
}

int kiemtra(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (kthoanthien(a[i]) && a[i] > 256)
			return 1;
	}
	return 0;
}
