#include<iostream>
using namespace std;
int uocleln(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "BAI 163:\nUoc le lon nhat cua "<<n<<" la: " << uocleln(n);
	return 1;
}

int uocleln(int n)
{
	int t = n;
	while (t % 2 == 0)
	{
		t = t / 2;
	}
	return t;
}
