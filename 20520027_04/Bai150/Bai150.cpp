#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(int[][100], int&, int&);
void xuat(int[][100], int, int);
int lonnhat(int[][100], int, int,int);
void themdong(int[][100], int&, int);

int main()
{
	int a[100][100];
	int m, n;

	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);

	cout << "Ma tran sau:\n";
	themdong(a, m, n);
	xuat(a, m, n);

	return 1;
}

void nhap(int a[][100], int& m, int& n)
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

void xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(10) << a[i][j];
		}
		cout << endl;
	}
}

int lonnhat(int a[][100], int m, int n,int c)
{
	int lc = a[0][c];
	for (int i = 0; i < m; i++)
	{
		if (a[i][c] > lc)
			lc = a[i][c];
	}
	return lc;
}

void themdong(int a[][100], int& m, int n)
{
	for (int i = 0; i < m + 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < m)
				a[i][j];
			else
				a[i][j] = lonnhat(a, m, n, j);
		}
	}
	m++;
}
