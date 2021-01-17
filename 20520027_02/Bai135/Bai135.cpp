#include<iostream>
using namespace std;
int ktnamnhuan(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = ktnamnhuan(n);
	if (kq == 1)
		cout << n << " la nam nhuan";
	else
		cout << n << " la nam khong nhuan";
	return 1;
}

int ktnamnhuan(int n)
{
	if (n % 400 == 0 || n % 4 == 0 && n % 100 != 0)
		return 1;
	return 0;
}
