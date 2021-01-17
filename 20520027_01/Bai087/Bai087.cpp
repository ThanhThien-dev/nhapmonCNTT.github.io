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

	int s = x;
	int t = x;
	int d = -1; //d viet tat cua dau
	int i = 3;
	while (i <= 2 * n+1)
	{
		t = t * x * x;
		s = s + d * t;
		d = -d;
		i = i + 2;
	}
	cout << "S = " << s;
	return 1;
}