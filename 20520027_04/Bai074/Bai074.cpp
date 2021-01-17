#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(int[][50], int&, int&);
void xuat(int[][50], int, int);
int chandau(int[][50], int, int);

int main()
{
	int a[50][50];
	int m, n;
	nhap(a, m, n);
	xuat(a, m, n);

	cout << "Gia tri chan dau tien cua ma tran la: " << chandau(a, m, n);
	return 0;
}

void nhap(int a[][50], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	cout << "Nhap lua chon:\n";
	cout << "(1) Nhap tay.\n";
	cout << "(2) Chay tu dong.\n";
	cout << "====>>>";
	int luachon;
	cin >> luachon;

	if (luachon == 1)
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
	}
	if (luachon == 2)
	{
		srand(std::time(nullptr));
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				a[i][j] = rand() % 201 - 100;
			}
	}
}

void xuat(int a[][50], int m, int n)
{
	cout << "Ma tran ban dau:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << a[i][j];
		}
		cout << endl;
	}
}

int chandau(int a[][50], int m, int n)
{
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			count++;
		}
	}
	if (count == 0)
		return -1;
	else
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] % 2 == 0)
					return a[i][j];
			}
		}
	}
}
