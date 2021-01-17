#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int i = n;
	while (1<=i)
	{
		s = sqrt(s + i);
		i = i - 1;
	}
	cout << "S = " << s;
	return 1;
}