#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void xuatcon(int[], int);


int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << "\nTat ca cac mang con: \n";
	xuatcon(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = (rand() % 201) - 100;
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << a[i];
	}
}

void xuatcon(int a[], int n)
{
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			for (int i = 0; i < l; i++)
			{
				cout << setw(5) << a[vt + i];
			}
			cout << endl;
		}
	}
}