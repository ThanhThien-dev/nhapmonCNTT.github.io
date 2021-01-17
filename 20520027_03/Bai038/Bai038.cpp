#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
int chusodau(int);
int tong(int[], int);

int main()
{
	int a[50];
	int n;
	nhap(a, n);
	xuat(a, n);

	cout << "\nTong cua cac phan tu co chu so dau le trong mang bang: " << tong(a, n);


	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}

void xuat(int a[], int n)
{
	cout << "Mang ban dau la:\n";
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(2) << a[i] << setw(10);
	}
}

int chusodau(int n)
{
	int t = abs(n);
	while (t>=10)
	{
		t /= 10;
	}
	return t;
}

int tong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (chusodau(a[i]) % 2 != 0)
			s += a[i];
	}
	return s;
}
