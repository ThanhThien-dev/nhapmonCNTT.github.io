#include<iostream>
using namespace std;
void nhap(int&, int&);
int kq(int, int);

int main()
{
	int n, k;
	nhap(n, k);
	cout << "S = " << kq(n, k);
	return 1;
}

void nhap(int& n, int& k)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;
}

int kq(int n, int k)
{
	int s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + pow(i, k);
		i++;
	}
	return s;
}
