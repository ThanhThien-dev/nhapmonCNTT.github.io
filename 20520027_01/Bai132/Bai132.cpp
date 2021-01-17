#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	cout << "Nhap xa,ya,xb,yb,xc,yc,xm,ym: \n";
	float xa, ya, xb, yb, xc, yc, xm, ym;
	cout << "xa = ";
	cin >> xa;

	cout << "ya = ";
	cin >> ya;

	cout << "xb = ";
	cin >> xb;

	cout << "yb = ";
	cin >> yb;

	cout << "xc = ";
	cin >> xc;

	cout << "yc = ";
	cin >> yc;

	cout << "xm = ";
	cin >> xm;

	cout << "ym = ";
	cin >> ym;

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
	{
		cout << "\nM thuoc tam giac ABC";
	}
	else
		cout << "\nM khong thuoc tam giac ABC";
		return 1;
}