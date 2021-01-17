#include<iostream>
using namespace std;

int main()
{
	int n, t;
	cout << "Nhap n: ";
	cin >> n;

	t = n;
	while (t%2==0)
	{
		t = t / 2;
	}
	cout << "Uoc so le lon nhat cua " << n << " la: " << t;
	return 1;
}