#include<iostream>
using namespace std;

int main()
{
	int n, t, i, m;
	cout << "Nhap n: ";
	cin >> n;

	t = 1;
	i = 1;
	while (t<n)
	{
		t = t * 2;
		if (t == n)
			m = i;
		i++;
	}
	if (t == n)
		cout << n << " co dang 2^" << m;
	else
		cout << n << " khong co dang 2^m";
	return 1;
}