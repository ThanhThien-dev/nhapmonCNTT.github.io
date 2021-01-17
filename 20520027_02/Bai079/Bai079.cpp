#include<iostream>
using namespace std;
int kq(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(" << n << ") = " << kq(n);
	return 1;
}

int kq(int n)
{
	int s = 0;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * i;
		s = s + i * t;
		i++;
	}
	return s;
}
