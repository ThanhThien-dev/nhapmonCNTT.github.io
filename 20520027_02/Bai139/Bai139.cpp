#include<iostream>
using namespace std;
void bai139(int, int);

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "BAI 139:\n";
	bai139(a, b);
	return 1;
}

void bai139(int a, int b)
{
	float x = 0;
	if (a==0)
	{
		if (b == 0)
			cout << "Phuong trinh vo so nghiem.";
		else
			cout << "Phuong trinh vo nghiem.";
	}
	else
	{
		x = (float)-b / a;
		cout << "x = " << x;
	}
}
