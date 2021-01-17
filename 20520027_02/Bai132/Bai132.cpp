#include<iostream>
using namespace std;
void nhap(int&, int&, int&, int&, int&, int&, int&, int&);
int bai132(int, int, int, int, int, int, int, int);

int main()
{
	int xa, ya, xb, yb, xc, yc, xm, ym;
	nhap(xa, ya, xb, yb, xc, yc, xm, ym);
	int kq = bai132(xa, ya, xb, yb, xc, yc, xm, ym);
	if (kq == 1)
		cout << "\nM thuoc tam giac.";
	else
		cout << "\nM khong thuoc tam giac.";

	return 1;
}

void nhap(int& xa, int& ya, int& xb, int& yb, int& xc, int& yc, int& xm, int& ym)
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
	cout << "Nhap xm: ";
	cin >> xm;
	cout << "Nhap ym: ";
	cin >> ym;
}

int bai132(int xa, int ya, int xb, int yb, int xc, int yc, int xm, int ym)
{
	cout << "Tinh dien tich cac tam giac: \n";
	float SABC = (1.0 / 2) * (abs(xa * yb + xb * yc + xc * ya - xb * ya - xc * yb - xa * yc));
	cout << "S.ABC = " << SABC;

	float SMAB = (1.0 / 2) * abs(xm * ya + xa * yb + xb * ym - xa * ym - xb * ya - xm * yb);
	cout << "\nS.MAB = " << SMAB;

	float SMBC = (1.0 / 2) * abs(xm * yb + xb * yc + xc * ym - xb * ym - xc * yb - xm * yc);
	cout << "\nS.MBC = " << SMBC;

	float SMCA = (1.0 / 2) * abs(xm * yc + xc * ya + xa * ym - xc * ym - xa * yc - xm * ya);
	cout << "\nS.MCA = " << SMCA;

	if (SABC == (SMAB + SMBC + SMCA))
		return 1;
	return 0;
}
