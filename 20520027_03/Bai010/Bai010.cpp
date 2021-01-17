#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);

int toanle(int);
void lietke(int[], int);

int main()
{
	int b[100];
	int k;

	nhap(b, k);
	cout << "Mang ban dau: ";
	xuat(b, k);

	cout << "\nCac gia tri toan le gom: ";
	lietke(b, k);
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

int toanle(int n)
{
	int flag = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
		return 1;
	return 0;
}

void lietke(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (toanle(a[i]) == 1)
			cout << a[i] << setw(8);
	}
}


