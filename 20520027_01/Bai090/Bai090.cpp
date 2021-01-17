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

	float s = 0;
	float t = 1;
	int m = 1;
	int d = -1; //d viet tat cua dau
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + d * (t / m);
		d = -d;
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}