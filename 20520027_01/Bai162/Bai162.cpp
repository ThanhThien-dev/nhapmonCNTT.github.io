#include<iostream>
using namespace std;

int main()
{
	int n, t, flag, lc, dv;
	cout << "Nhap n: ";
	cin >> n;

	flag = 1;
	t = n;
	lc = t % 10;
	t = t / 10;
	while (t != 0)
	{
		dv = t % 10;
		if (dv < lc)
		{
			flag = 0;
		}
		lc = dv;
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << "Cac chu so cua " << n << " giam dan tu trai sang phai.";
	}
	else
		cout << "Cac chu so cua " << n << " khong giam dan tu trai sang phai.";

	return 1;
}