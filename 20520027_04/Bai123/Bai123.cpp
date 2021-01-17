#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(int[][100], int&, int&);
void xuat(int[][100], int, int);
void hoanvi(int&, int&);
void dongtang(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n,d;

	nhap(a, n, m);
	cout << "Ma tran ban dau:\n";
	xuat(a, n, m);

	cout << "Nhap dong can sap xep: ";
	cin >> d;
	cout << "\nDong tang dan:\n";
	dongtang(a, n, m, d);
	xuat(a, n, m);

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

void hoanvi(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

void dongtang(int a[][100], int n, int m,int d)
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[d][i] > a[d][j])
				hoanvi(a[d][i], a[d][j]);
		}
	}
}
