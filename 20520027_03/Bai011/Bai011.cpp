#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
bool kiemtra(int);
void lietke(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);

	cout << "\nCac gia tri co dang 3^m: ";
	lietke(a, n);

	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = (rand() % 201) - 100;
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(6);
	}
}

bool kiemtra(int n)
{
	int t = n;
	bool flag = true;
	if (t < 1)
		return false;
	while (t>1)
	{
		if (t % 3 != 0)
			flag = false;
		t /= 3;
	}
	return flag;
}

void lietke(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemtra(a[i]))
		{
			cout << a[i] << setw(6);
		}
	}
}