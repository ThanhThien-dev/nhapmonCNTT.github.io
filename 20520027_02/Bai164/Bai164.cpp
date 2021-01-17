#include<iostream>
using namespace std;
float s(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "BAI 164:\nS(" << n << ") = " << s(n);
	return 1;
}

float s(int n)
{
	float s = 1;
	int i = 1;
	while (i<=n)
	{
		s = (float)1 / (s + 1);
		i++;
	}
	return s;
}
