#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktcon(float[], int, int, int);
void xuatcon(float[], int);


int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << "\ncac day con tang trong mang: \n";
	xuatcon(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];//a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << fixed << setprecision(2) << a[i];
	}
}

int ktcon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
	{
		if (a[vt + i] > a[vt + i + 1])
		{
			flag = 0;
		}
	}
	return flag;
}

void xuatcon(float a[], int n)
{
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktcon(a, n, vt, l) == 1)
			{
				for (int i = 0; i < l; i++)
				{
					cout << setw(10) << a[vt + i];
				}
				cout << endl;
			}
		}
	}
}