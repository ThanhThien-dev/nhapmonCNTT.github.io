#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(float[][50], int&, int&);
void xuat(float[][50], int, int);
float tongdong(float[][50], int, int, int);
float lonnhat(float[][50], int, int);

int main()
{
	float a[50][50];
	int m, n;
	nhap(a, m, n);
	xuat(a, m, n);
	cout << "Tong dong lon nhat trong ma tran: " << lonnhat(a, m, n);
	return 0;
}

void nhap(float a[][50], int& m, int& n)
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

void xuat(float a[][50], int m, int n)
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

float tongdong(float a[][50], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
	{
		s = s + a[d][j];
	}
	return s;
}

float lonnhat(float a[][50], int m, int n)
{
	int lc = tongdong(a, m, n, 0);
	for (int i = 0; i < n; i++)
	{
		if (lc < tongdong(a, m, n, i))
			lc = tongdong(a, m, n, i);
	}
	return lc;
}