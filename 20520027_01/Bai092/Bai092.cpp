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

	float s = 1-x;
	float t = x;
	int m = 1;
	int d = 1; //d viet tat cua dau
	int i = 3;
	while (i <= 2 * n+1)
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + d * (t / m);
		d = -d;
		i = i + 2;
	}
	cout << "S = " << s;
	return 1;
}