#include<iostream>
using namespace std;

int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z:";
	cin >> z;

	if (x <= y && y <= z)
		cout << "Bat dang thuc dung";
	else
		cout << "Bat dang thuc sai";
	return 1;
}