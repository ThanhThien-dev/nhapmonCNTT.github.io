#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(int[][100], int&, int&);
void xuat(int[][100], int, int);
bool ktnt(int);
bool ktcp(int);
int ktdong(int[][100], int, int, int);
void xoadong(int[][100], int&, int, int);
void kq(int[][100], int&, int);

int main()
{
	int a[100][100];
	int m, n, d;

	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);

	cout << "\nMa tran sau khi xoa:\n";
	kq(a, m, n);
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

bool ktnt(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

bool ktcp(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

int ktdong(int a[][100], int m, int n, int d)
{
	int flag1 = 0;
	int flag2 = 0;
		for (int j = 0; j < n; j++)
		{
			if (ktnt(a[d][j]))
				flag1 = 1;
			if (ktcp(a[d][j]))
				flag2 = 1;
		}
		return flag1 * flag2;
}

void xoadong(int a[][100], int& m, int n, int d)
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


void kq(int a[][100], int& m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktdong(a, m, n, i) == 1)
				xoadong(a, m, n, i);
		}
	}
}
