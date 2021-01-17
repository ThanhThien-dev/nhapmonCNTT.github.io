#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
bool ktcp(int);
void lietke(int[], int);

int main()
{
	int a[100];
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
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	cout << "Mang ban dau la:\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(6);
	}
}

bool ktcp(int n)
{
	for (int i = 0; i * i <= n; i++)
	{
		if (i * i == n)
			return true;
	}	
	return false;	
}

void lietke(int a[], int n)
{
	int count = 0;
	cout << "\nVi tri cac so chinh phuong la: ";
	for (int i = 0; i < n; i++)
	{
		if (ktcp(a[i]) == true)
		{
			count++;
			cout << i << setw(6);
		}
	}
	if (count == 0)
		cout << "ko co so chinh phuong";
}
