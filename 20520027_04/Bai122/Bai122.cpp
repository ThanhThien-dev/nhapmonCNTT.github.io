#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(int[][100], int&, int&);
void xuat(int[][100], int, int);
void hoanvi(int&, int&);
void hoanvicot(int[][100], int, int, int, int);

int main()
{
	int a[100][100];
	int m, n, c1, c2;

	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);

	cout << "Nhap cot 1: ";
	cin >> c1;
	cout << "Nhap cot 2: ";
	cin >> c2;
	cout << "\nHoan vi cot:\n";
	hoanvicot(a, m, n, c1, c2);
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

void hoanvi(int& c1, int& c2)
{
	int t = c1;
	c1 = c2;
	c2 = t;
}

void hoanvicot(int a[][100], int n, int m, int c1, int c2)
{
	for (int i = 0; i < n; i++)
	{
		hoanvi(a[i][c1], a[i][c2]);
	}
}
