#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);

int main()
{
	int b[100];
	int k;

	nhap(b, k);
	cout << "Mang ban dau: ";
	xuat(b, k);

	return 0;
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(6);
	}
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = (rand() % 201) - 100;
	}
}

