#include<iostream>
using namespace std;
void nhap(int&, int&);
int UCLN(int, int);
int BCNN(int, int);

int main()
{
	int a, b;
	nhap(a, b);

	cout << "Uoc chung lon nhat la: " << UCLN(a, b);
	cout << "\nBoi chung nho nhat la: " << BCNN(a, b);

	return 1;
}

void nhap(int& a, int& b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}

int UCLN(int a, int b)
{
	int m = abs(a);
	int n = abs(b);
	while (m*n!=0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int UCLN = m + n;
	return UCLN;
}

int BCNN(int a, int b)
{
	int BCNN = (abs(a * b)) / UCLN(a, b);
	return BCNN;
}
