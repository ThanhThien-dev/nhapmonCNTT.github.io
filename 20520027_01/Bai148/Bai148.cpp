#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	int n, t, dv;
	cin >> n;
	int flag = 1;
	t = n;
	while (t != 0)
	{
		dv = t % 2;
		if(dv % 2 == 1)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
		cout << "So " << n << " toan chu so chan.";
	else
		cout << "So " << n << " khong toan chu so chan.";
	return 1;
}