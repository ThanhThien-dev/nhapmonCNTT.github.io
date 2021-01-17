#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(float[][100], int&, int&);
void xuat(float[][100], int, int);
void matranduong(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;

	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);

	cout << "Ma tran sau khi bien doi:\n";
	matranduong(a, m, n);
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

void matranduong(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = abs(a[i][j]);
		}
	}
}
