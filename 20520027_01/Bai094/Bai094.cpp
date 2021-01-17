#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = sqrt(s + i);
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}