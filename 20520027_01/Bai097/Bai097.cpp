#include<iostream>
using namespace std;

int main()
{
	int x,n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;

	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = sqrt(s + t);
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}