#include<iostream>
using namespace std;
void nhap(int&, int&, int&, int&, int&, int&);
int bai131(int, int, int, int, int, int);

int main()
{
	int xa, ya, xb, yb, xc, yc;
	nhap(xa, ya, xb, yb, xc, yc);
	int kq = bai131(xa, ya, xb, yb, xc, yc);
	if (kq == 1)
		cout << "A, B, C la 3 dinh cua tam giac.";
	else
		cout << "A, B, C khong phai 3 dinh cua tam giac.";

	return 1;
}

void nhap(int& xa, int& ya, int& xb, int& yb, int& xc, int& yc)
{
	cout << "Nhap xa: ";
	cin >> xa;
	cout << "Nhap ya: ";
	cin >> ya;
	cout << "Nhap xb: ";
	cin >> xb;
	cout << "Nhap yb: ";
	cin >> yb;
	cout << "Nhap xc: ";
	cin >> xc;
	cout << "Nhap yc: ";
	cin >> yc;
}

int bai131(int xa, int ya, int xb, int yb, int xc, int yc)
{
	int AB = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
	int BC = sqrt((xc - xb) * (xc - xb) + (yc - yb) * (yc - yb));
	int CA = sqrt((xa - xc) * (xa - xc) + (ya - yc) * (ya - yc));

	if (AB + BC > CA && BC + CA > AB && CA + AB > BC)
		return 1;
	return 0;
}
