#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int f = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
		{
			f = 1;
		}
		t = t / 10;
	}
	if (f == 1)
		cout << n << " co ton tai so le nhaaa";
	else
	{
		cout << n << " ko ton tai so le";
	}
	return 1;
}