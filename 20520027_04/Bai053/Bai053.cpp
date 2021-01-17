#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[][100], int&, int&);
void xuat(int[][100], int, int);
bool ktcp(int);
int soluongcp(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	nhap(a, m, n);
	cout << "Ma tran ban dau la:\n";
	xuat(a, m, n);

	cout << "\nSo luong so chinh phuong la: " << soluongcp(a, m, n);

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

bool ktcp(int c)
{
	for (int i = 0; i <= c; i++)
	{
		if (i * i == c)
			return true;
	}
	return false;
}

int soluongcp(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktcp(a[i][j]))
				dem++;
		}
	}
	return dem;
}
