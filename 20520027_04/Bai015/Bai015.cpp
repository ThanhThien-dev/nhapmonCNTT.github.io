#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[][100], int&, int&);
void xuat(int[][100], int, int);
void lietke(int[][100], int, int,int);

int main()
{
	int a[100][100];
	int m, n;
	nhap(a, m, n);
	cout << "Ma tran ban dau la:\n";
	xuat(a, m, n);

	int d;
	cout << "Nhap dong can tim: ";
	cin >> d;
	cout << "\nCac gia tri chan cung 1 dong trong ma tran:\n";
	lietke(a, m, n, d);

	return 0;
}

void nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 201 - 100;
}

void xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}

void lietke(int a[][100], int m, int n, int d)
{

		for (int j = 0; j < n; j++)
		{
			if (a[d][j]%2==0)
			{
				cout << setw(8) << a[d][j];
			}
		}
}
