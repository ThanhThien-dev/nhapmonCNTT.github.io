#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(float[][50], int&, int&);
void xuat(float[][50], int, int);
float lonnhat(float[][50], int, int);

int main()
{
	float a[50][50];
	int m, n;
	nhap(a, m, n);
	xuat(a, m, n);

	cout << "Gia tri lon nhat cua ma tran la: " << lonnhat(a, m, n);
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

float lonnhat(float a[][50], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] >= lc)
				lc = a[i][j];
		}
	}
	return lc;
}
