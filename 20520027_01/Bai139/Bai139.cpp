#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap a = ";
	float a;
	cin >> a;
	cout << "Nhap b = ";
	float b;
	cin >> b;
	
	while (a==0)
	{
		if (b == 0)
			cout << "Phuong trinh vo so nghiem.";
		else
			cout << "Phuong trinh vo nghiem.";
	}
	float s = -b / a;
	cout << "Phuong trinh bang: " << s;
	return 1;
}