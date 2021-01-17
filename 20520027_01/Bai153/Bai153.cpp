#include<iostream>
using namespace std;

int main()
{
	int n, m, t, i;
	cout << "Nhap n: ";
	cin >> n;

	t = 1;
	i = 1;

	while (t<n)
	{
		t = t * 5;
		if (t == n)
			m = i;
		i++;
	}
	if (t == n)
		cout << n << " co dang 5^" << m;
	else
		cout << n << " ko co dang 5^m";
	return 1;
}