#include<iostream>
using namespace std;

void nhap(int&, int&);
int kq(int, int);
int main()
{
	int n, x;
	nhap(n, x);
	cout << "T = " << kq(n, x);
	return 1;
}

void nhap(int& n, int& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
}

int kq(int n, int x)
{
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * x;
		i++;
	}
	return t;
}


