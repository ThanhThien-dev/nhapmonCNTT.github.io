#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(int[][100], int&, int&);
void xuat(int[][100], int, int);
void hoanvi(int&,int&);
void hoanvidong(int[][100], int, int, int, int);

int main()
{
	int a[100][100];
	int m, n, d1, d2;
	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);

	cout << "Nhap dong 1: ";
	cin >> d1;
	cout << "Nhap dong 2: ";
	cin >> d2;
	cout << "\nHoan vi dong:\n";
	hoanvidong(a, m, n, d1, d2);
	xuat(a, m, n);
	return 0;
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
			cout << setw(6) << a[i][j];
		}
		cout << endl;
	}
}

void hoanvi(int& d1, int& d2)
{
	int temp = d1;
	d1 = d2;
	d2 = temp;
}

void hoanvidong(int a[][100], int m, int n, int d1, int d2)
{
	/*if ((d1 >= 0 && d1 < n) && (d2 >= 0 && d2 < n))
	{*/
		for (int j = 0; j < n; j++)
		{
			hoanvi(a[d1][j], a[d2][j]);
		}
	/*}*/
}
