#include<iostream>
using namespace std;
int s48(int ,int);

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S = " << s48(x, n);
	return 1;
}

int s48(int x, int n)
{
	int s = x;
	int i = 1;
	while (i<=n)
	{
		s = s * (x + i);
		i++;
	}
	return s;
}
