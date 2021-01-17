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

	float s = -1;
	float t = 1;
	int m = 1;
	int d = 1; //d viet tat cua dau
	int i = 2;
	while (i <= 2*n)
	{
		t = t * x * x;
		m = m * (i - 1)*i;
		s = s + d * (t / m);
		d = -d;
		i = i + 2;
	}
	cout << "S = " << s;
	return 1;
}