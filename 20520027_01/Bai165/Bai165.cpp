#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int t = 2;
	int i = 1;
	while (t < n)
	{
		t = t * 2;
		i++;
	}
	i = i - 1;
	cout << "k = " << i;
	return 1;
}