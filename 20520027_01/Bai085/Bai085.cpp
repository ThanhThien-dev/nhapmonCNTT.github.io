#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	int s = 0;
	int t = 1;
	int d = 1; //d viet tat cua dau
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + d * t;
		d = -d;
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}