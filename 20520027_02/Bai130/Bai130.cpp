#include<iostream>
using namespace std;
void nhap(int&, int&, int&);
int kttamgiac(int, int, int);

int main()
{
	int x, y, z;
	nhap(x, y, z);
	int kq = kttamgiac(x, y, z);
	if (kq == 1)
		cout << "Ton tai tam giac.";
	else
		cout << "Khong ton tai tam giac.";

	return 1;
}

void nhap(int& x, int& y, int& z)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}

int kttamgiac(int x, int y, int z)
{
	if (x + y > z && y + z > x && x + z > y)
		return 1;
	return 0;
}
