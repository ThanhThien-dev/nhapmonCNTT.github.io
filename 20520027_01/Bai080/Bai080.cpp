#include<iostream>
using namespace std;

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	float s = 1;
	float t = 1;
	int i = 2;
	while (i <= n + 1)
	{
		t = t * x;
		s = s + t * i;
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}