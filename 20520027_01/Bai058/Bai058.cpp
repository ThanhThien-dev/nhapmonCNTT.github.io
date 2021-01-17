#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int S = 0;
	int t = n;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		S = S + dv;
		t = t / 10;
	}
	cout << "S = " << S;
	return 1;
}