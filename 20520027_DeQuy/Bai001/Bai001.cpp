#include<iostream>
using namespace std;
int tong(int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	int kq = tong(k);
	cout << "Tong la: " << kq;
	return 1;
}

int tong(int k)
{
	if (k == 0)
		return 0;
	return (tong(k - 1) + k);
}
