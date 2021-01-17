#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(float[][100], int&, int&);
void xuat(float[][100], int, int);
void xoadong(float[][100], int&, int, int);

int main()
{
	float a[100][100];
	int m, n,d;

	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);

	cout << "Nhap dong can xoa: ";
	cin >> d;
	cout << "\nMa tran sau khi xoa:\n";
	xoadong(a, m, n, d);
	xuat(a, m, n);

	return 0;
}

void nhap(float a[][100], int& m, int& n)
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

void xuat(float a[][100], int m, int n)
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

void xoadong(float a[][100], int& m, int n, int d)
{
	for (int i = d; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = a[i + 1][j];
		}
	}
	m--;
}
