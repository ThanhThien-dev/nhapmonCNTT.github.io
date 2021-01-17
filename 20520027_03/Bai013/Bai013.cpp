#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
bool nguyento(int);
void lietke(int[], int);

int main()
{
	int a[50];
	int n;
	nhap(a, n);
	xuat(a, n);
	lietke(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 201 - 100;
	}
}

void xuat(int a[], int n)
{
	cout << "Mang ban dau la:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = " << a[i] << "\n";
	}
}

bool nguyento(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i==0)
			dem++;
	}
	if (dem==2)
	{
		return true;
	}
	return false;
}

void lietke(int a[],int n)
{
	cout << "Cac so nguyen to la:\n";
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (nguyento(a[i]) == true)
		{
			cout << i << setw(6);
			count++;
		}
	}
	if (count == 0)
		cout << "Khong co so nguyen to";
}