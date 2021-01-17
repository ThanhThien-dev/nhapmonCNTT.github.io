#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
bool ktht(int);
int demht(int[], int);

int main()
{
	int a[100];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la:";
	xuat(a, n);

	cout << "\nSo luong so hoan thien trong mang la: " << demht(a, n);

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

bool ktht(int n)
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

int demht(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktht(a[i]))
			dem++;
	}
	return dem;
}