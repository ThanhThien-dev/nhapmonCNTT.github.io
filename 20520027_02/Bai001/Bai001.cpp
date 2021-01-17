#include<iostream>
using namespace std;
void nhap(float&, float&, float&, float&);
float khoangcach(float, float, float, float);

int main()
{
	float x1, y1, x2, y2;
	nhap(x1, y1, x2, y2);
	cout << "Khoang cach giua 2 diem la: " << khoangcach(x1, y1, x2, y2);
	return 1;
}

void nhap(float& x1, float& y1, float& x2, float& y2)
{
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
}

float khoangcach(float x1, float y1, float x2, float y2)
{
	float d = 0;
	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return d;
}