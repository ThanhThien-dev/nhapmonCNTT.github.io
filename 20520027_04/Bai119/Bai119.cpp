#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(float[][100], int&, int&);
void xuat(float[][100], int, int);
float lnd(float[][100], int, int, int);
float lnc(float[][100], int, int, int);
void xaydung(float[][100], int, int, float[][100], int&, int&);

int main()
{
	float a[100][100];
	float b[100][100];
	int m, n, k, l;
	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);
	cout << "\nB[i][j] = lon nhat dong i cot j:\n";
	xaydung(a, m, n, b, k, l);


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

float lnd(float a[][100], int m, int n, int d)
{
	float lc = a[d][0];
	
	for (int j = 0; j < n; j++)
	{
		
		if (a[d][j] > lc)
			lc = a[d][j];
	}
	return lc;
}

float lnc(float a[][100], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
	{
		if (a[i][c] > lc)
			lc = a[i][c];
	}
	return lc;
}

void xaydung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			float x = lnd(a, m, n, i);
			float y = lnc(a, m, n, j);
			if (x < y)
				b[i][j] = y;
			else
				b[i][j] = x;
			cout << setw(10) << b[i][j];
		}
		cout << endl;
	}
}
//Bai121, trang 190