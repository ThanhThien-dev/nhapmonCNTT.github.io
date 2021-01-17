#include<iostream>
using namespace std;
int tich(int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	int kq = tich(k);
	cout << "Ket qua la: " << kq;
	return 1;
}

int tich(int k)
{
	if (k == 0)
		return 0;
	return (tich(k - 1) + k * k);
}
