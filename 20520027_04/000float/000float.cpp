#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[][100], int&, int&);
void xuat(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	nhap(a, m, n);
	cout << "Ma tran ban dau la:\n";
	xuat(a, m, n);


	return 0;
}

void nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() / (RAND_MAX / 200.0);
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
