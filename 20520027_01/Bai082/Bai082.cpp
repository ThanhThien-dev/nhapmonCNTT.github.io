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

	double s = 0;
	double t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * sin(x);
		s = s + t;
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}