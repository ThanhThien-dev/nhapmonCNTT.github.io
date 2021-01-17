#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	float m = 0;
	int d = 1; //d viet tat cua dau
	int i = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + d/m;
		d = -d;
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}