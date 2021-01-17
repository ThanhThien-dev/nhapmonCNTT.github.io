#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
bool perfectnumber(int);
int vitricuoi(int[], int);

int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nVi tri so hoan thien cuoi cua mang la: " << vitricuoi(a, n);

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
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << a[i];
	}
}

bool perfectnumber(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
	{
		return true;
	}
	return false;
}

int vitricuoi(int a[], int n)
{
	for (int i=n-1; i >= 0; i--)
	{
		if (perfectnumber(a[i]))
			return i;
	}
	return -1;
}
