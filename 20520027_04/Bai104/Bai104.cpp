#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(int[][100], int&, int&);
void xuat(int[][100], int, int);
bool ktht(int);
int htdau(int[][100], int, int);
int htln(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;

	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);
	cout << "So hoan thien lon nhat trong ma tran la: " << htln(a, m, n);

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
				a[i][j] = rand() % 201 ;
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

int htdau(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktht(a[i][j]))
				return a[i][j];
		}
	}
	return -1;
}

int htln(int a[][100], int m, int n)
{
	int lc = htdau(a, m, n);
	if (lc == -1)
		return -1;
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktht(a[i][j]) && a[i][j] > lc)
				lc = a[i][j];
		}
	}
	return lc;
}

