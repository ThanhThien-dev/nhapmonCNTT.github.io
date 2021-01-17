#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
int tansuat(int[], int, int);
int dem(int[], int, int[], int);

int main()
{
	int a[100];
	int n;
	nhap(a, n);
	cout << "Mang A la:";
	xuat(a, n);
	cout << endl;

	int b[100];
	int k;
	nhap(b, k);
	cout << "Mang B la:";
	xuat(b, k);

	cout << "\nSo luong gia tri chi xuat hien 1 trong 2 mang la: " << dem(a, n, b, k);

	return 1;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu: ";
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

int dem(int a[], int n, int b[], int k)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
				flag = false;
			if (tansuat(b, k, a[i]) == 0 && flag == true)
				dem++;
		}
	}
	for (int i = 0; i < k; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (b[i] == b[j])
				flag = 0;
			if (tansuat(a, n, b[i]) == 0 && flag == 1)
				dem++;
		}
	}
	return dem;
}
