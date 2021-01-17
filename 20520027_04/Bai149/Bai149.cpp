#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(float[][100], int&, int&);
void xuat(float[][100], int, int);
void themcot(float[][100], int, int&, int);

int main()
{
	float a[100][100];
	int m, n, c;

	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);

	cout << "Nhap cot can them: ";
	cin >> c;
	cout << "Ma tran sau khi them 1 cot toan 0:\n";
	themcot(a, m, n, c);
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

void themcot(float a[][100], int m, int& n, int c)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = n + 1; j >= c; j--)
		{
			a[i][j] = a[i][j - 1];
		}
	}
	n++;
	for (int i = 0; i < m; i++)
	{
		a[i][c] = 0;
	}
}
