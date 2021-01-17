#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap nam: ";
	int n;
	cin >> n;

	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		cout << "Nam " << n << " la nam nhuan.";
	else
		cout << "Nam " << n << " khong phai la nam nhuan.";
	return 1;
}