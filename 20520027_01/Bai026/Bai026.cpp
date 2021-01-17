#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap a va b: \n";
	float a, b;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	a = a - b;
	b = a + b;
	a = b - a;

	cout << "Sau khi hoan doi thi:\na = " << a;
	cout << "\nb = " << b;
	return 1;
}