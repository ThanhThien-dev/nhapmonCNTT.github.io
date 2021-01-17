#include<iostream>
using namespace std;
float kq(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S = " << kq(n);
	return 1;
}

float kq(int n)
{
	float s = 0;
	int m = 0;
	int i = 1;
	int dau = 1;
	while (i<=n)
	{
		m = m + i;
		s = s + (float)dau / m;
		i++;
		dau = -dau;
	}
	return s;
}
