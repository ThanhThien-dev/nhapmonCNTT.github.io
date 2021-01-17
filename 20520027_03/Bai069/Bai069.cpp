#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
int tansuat(int[], int, int);
void lietke(int[], int);

int main()
{
	int a[100];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la:";
	xuat(a, n);

	cout << "\nCac gia tri xuat hien nhieu hon 1 lan la:\n";
	lietke(a, n);

	return 1;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;

	cout << "\nChon (1) hoac (2):";
	cout << "\n(1) Nhap tay";
	cout << "\n(2) Chay tu dong";
	cout << "\n====>";
	int chon;
	cin >> chon;

	if (chon == 1)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}

	if (chon == 2)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 201 - 100;
		}
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}

int tansuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

void lietke(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
				flag = 0;
		}
		if (tansuat(a, n, a[i]) > 1 && flag == 1)
			cout << a[i] << setw(8);
	}
}