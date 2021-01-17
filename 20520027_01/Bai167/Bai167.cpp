#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int s = 0;
	int i = 0;
	while (s < n)
	{
		i++;
		s = s + i;
	}
	i = i - 1;
	cout << "k = " << i;
	return 1;
}