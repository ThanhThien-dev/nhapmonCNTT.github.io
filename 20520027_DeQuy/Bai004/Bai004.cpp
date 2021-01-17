#include<iostream>
using namespace std;
int luythua(int, int);

int main()
{
	int k, x;
	cout << "Nhap k: ";
	cin >> k;
	cout << "Nhap x: ";
	cin >> x;

	int kq = luythua(k, x);
	cout << "Luy thua la: " << kq;
	return 1;
}

int luythua(int k, int x)
{
	if (x == 0)
		return 1;
	return (luythua(k, x - 1) * k);
}
