#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap a va b: \n";
	float a, b, c;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	c = a;
	a = b;
	b = c;

	cout << "Sau khi hoan doi thi:\na = " << a;
	cout << "\nb = " << b;
	return 1;
}