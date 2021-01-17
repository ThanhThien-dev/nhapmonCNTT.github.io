#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[][100], int&, int&);
void xuat(int[][100], int, int);
int tong(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	nhap(a, m, n);
	cout << "Ma tran ban dau la:\n";
	xuat(a, m, n);
	cout << "Tong gia tri chan trong ma tran bang: " << tong(a, m, n);
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

int tong(int a[][100], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] % 2 == 0)
				s += a[i][j];
		}
	}
	return s;
}
