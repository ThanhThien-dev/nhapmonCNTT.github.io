#include<iostream>
using namespace std;

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void nhap(PHANSO&);
void xuat(PHANSO);
void ktduong(PHANSO);
float tong(PHANSO, PHANSO);

int main()
{
	PHANSO a, b;
	cout << "Nhap phan so thu 1: \n";
	nhap(a);
	cout << "Nhap phan so thu 2: \n";
	nhap(b);
	cout << "Phan so thu 1 la: ";
	xuat(a);
	cout << "\nPhan so thu 2 la: ";
	xuat(b);

	cout << "\nKiem tra phan so duong hay am:\n";
	ktduong(a);

	cout << "\nTong 2 phan so la: " << tong(a, b);

	return 1;
}

void nhap(PHANSO& x)
{
	cout << "Nhap tu so: ";
	cin >> x.tu;
	cout << "Nhap mau so: ";
	cin >> x.mau;
}

void xuat(PHANSO x)
{
	cout << x.tu << "/" << x.mau;
}

void ktduong(PHANSO x)
{
	if (x.tu * x.mau > 0)
		cout << "Phan so duong.";
	else
		cout << "Phan so am.";
}

float tong(PHANSO x, PHANSO y)
{
	return (float)(x.tu * y.mau + y.tu * x.mau) / (x.mau * y.mau);
}
