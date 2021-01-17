#include<iostream>
using namespace std;
int kq(int, int);
int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S = " << kq(x, n);
	return 1;
}

int kq(int x, int n)
{
	int s = 1;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * x;
		s = s + t;
		i++;
	}
	return s;
}
