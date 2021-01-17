#include<iostream>
using namespace std;

void Nhap(float&);
float DienTich(float);
float Chuvi(float);
float dtxq(float);
float thetich(float);

int main()
{
	float bk;
	cout << "Nhap ban kinh r: ";
	Nhap(bk);

	cout << "Bai 002: Tinh dien tich duong tron\nDien tich duong tron bang: " << DienTich(bk);

	cout << "\nBai 003: Tinh chu vi duong tron\nChu vi duong tron bang: " << Chuvi(bk);

	cout << "\nBai 004: Tinh dien tich xung quanh hinh cau\nDien tich xung quanh hinh cau bang: " << dtxq(bk);

	cout << "\nBai 005: Tinh the tich hinh cau\nThe tich hinh cau bang: " << thetich(bk);
	return 1;
}
void Nhap(float& r)
{
	cin >> r;
}

float DienTich(float r)
{
	float dt = 0;
	dt = 3.14 * r * r;
	return dt;
}

float Chuvi(float r)
{
	float cv = 0;
	cv = 2 * r * 3.14;
	return cv;
}

float dtxq(float r)
{
	float d = 4 * 3.14 * r * r;
	return d;
}

float thetich(float r)
{
	float v = 0;
	v = (4 / 3) * 3.14 * r * r * r;
	return v;
}