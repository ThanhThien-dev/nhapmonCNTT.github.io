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
	int d = -1; //d viet tat cua dau
	int i = 2;
	while (i <= 2*n)
	{
		t = t * x * x;
		s = s + d * t;
		d = -d;
		i = i + 2;
	}
	cout << "S = " << s;
	return 1;
}