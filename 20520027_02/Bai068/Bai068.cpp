#include<iostream>
using namespace std;
int tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S = " << tong(n);
	return 1;
}

int tong(int n)
{
	int s = 0;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * i;
		s = s + t;
		i++;
	}
	return s;
}
