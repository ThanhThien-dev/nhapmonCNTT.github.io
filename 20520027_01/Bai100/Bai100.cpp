#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	float t = 1;
	float i = 1;
	while (i <= n)
	{
		t = t * i;
		s = pow(sqrt(s + t), (1 / i + 1));
		i = i + 1;
	}
	cout << "S = " << s;
	return 1;
}