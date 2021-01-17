#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(float[][100], int&, int&);
void xuat(float[][100], int, int);
int ktcon(float[][100], int, int, int, int);
void XuatCon(float[][100], int, int);
void concuoi(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n, vtd, vtc;

	nhap(a, m, n);
	cout << "Ma tran ban dau:\n";
	xuat(a, m, n);

	cout << "Ma tran 3x3 toan am:\n";
	concuoi(a, m, n);
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
		srand(time(NULL));
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
			}
	}
}

void xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}

int ktcon(float a[][100], int m, int n, int vtd, int vtc)
{
	int flag = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[vtd + i][vtc + j] >= 0)
				flag = 0;
		}
	}
	return flag;
}

void XuatCon(float a[][100], int k, int l)
{
	for (int i = k; i <= k + 2; i++)
	{
		cout << endl;
		for (int j = l; j <= l + 2; j++)
		{
			cout << setw(10) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
}

void concuoi(float a[][100], int m, int n)
{
	int flag = 0;
	int vtd, vtc;
	for (int vtd = 0; vtd <= m - 3; vtd++)
	{
		for (int vtc = 0; vtc <= n - 3; vtc++)
		{
			if (ktcon(a, m, n, vtd, vtc))
			{
				flag = 1;
				XuatCon(a, vtd, vtc);
				return;
			}
		}
	}
	if (flag == 0)
	{
		cout << "\nMa tran Khong co ma tran con kich thuoc 3 x 3 toan am.\n";
	}
}