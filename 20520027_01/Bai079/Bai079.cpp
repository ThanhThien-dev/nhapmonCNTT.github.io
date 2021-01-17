#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;

	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + t*i;
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}