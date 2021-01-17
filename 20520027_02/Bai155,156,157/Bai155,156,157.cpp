#include<iostream>
#include<iomanip>
using namespace std;

void nhap(int&);
void bai155(int);
void bai156(int);
void bai157(int);

int main()
{
	int n;
	nhap(n);

	cout << "BAI 155:\n";
	bai155(n);
	cout << "\nBAI 156:\n";
	bai156(n);
	cout << "\nBAI 157:\n";
	bai157(n);

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

void bai155(int n)
{
	int a = 1;
	int i = 0;
	cout << "a[" << n << "] = ";
	while (i<=n)
	{
		a = a * 2;
		cout << a << setw(6);
		i++;
	}
}

void bai156(int n)
{
	int a = 1;
	int i = 1;
	cout << "a[" << n << "] = ";
	cout << "1";
	while (i<=n)
	{
		a = a * i;
		cout << setw(6) << a ;
		i++;
	}
}

void bai157(int n)
{
	float a = 0;
	int i = 1;
	cout << "a[" << n << "] = ";
	while (i <= n)
	{
		a = a + (float)1 / i;
		cout << a << "     ";
		i++;
	}
}
