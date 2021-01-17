#include<iostream>
using namespace std;

int main()
{
	int n, t, i, m;
	cout << "Nhap n: ";
	cin >> n;

	t = 1;
	i = 1;
	while (t < n)
	{
		t = t * 3;
		if (t == n)
			m = i;
		i++;
	}
	if (t == n)
		cout << n << " co dang 3^" << m;
	else
		cout << n << " khong co dang 3^m";
	return 1;
}