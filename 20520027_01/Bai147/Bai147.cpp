#include <iostream>
using namespace std;
int main()
{
	int n, dv;
	cin >> n;
	int flag = 1;
	int t = n;
	while (t!=0)
	{
		dv = t % 10;
		if (dv%2==0)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
		cout << "So nay la so Toan Le";
	else
		cout << "So nay khong phai so Toan Le";
	return 1;
}