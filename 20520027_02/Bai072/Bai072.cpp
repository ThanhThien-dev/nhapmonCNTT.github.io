#include<iostream>
using namespace std;
float s(float);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S = " << s(n);
	return 1;
}

float s(float n)
{
	float s = 0;
	float m = 0;
	int i = 1;
	while (i<=n)
	{
		m = m + i;
		s = s + ((float)1 / m);
		i++;
	}
	return s;
}
