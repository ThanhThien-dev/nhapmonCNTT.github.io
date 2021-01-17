#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	DIEM a;
	DIEM b;
	DIEM c;
};
typedef struct tamgiac TAMGIAC;	
void nhap(DIEM&);
void xuat(DIEM);
void nhaptg(TAMGIAC&);
void xuattg(TAMGIAC);
float kc(DIEM, DIEM);
float dientich(TAMGIAC);
float chuvi(TAMGIAC);
DIEM trongtam(TAMGIAC);

int main()
{
	TAMGIAC t;
	nhaptg(t);
	xuattg(t);

	cout << "\nDien tich tam giac la: " << dientich(t);

	float cv = chuvi(t);
	cout << "\nChu vi tam giac la: " << cv;

	DIEM tt = trongtam(t);
	cout << "\nTrong tam tam giac la: ";
	tt;
	xuat(tt);

	return 1;
}

void nhap(DIEM& p)
{
	cout << "Nhap x: ";
	cin >> p.x;
	cout << "Nhap y: ";
	cin >> p.y;
}

void xuat(DIEM p)
{
	cout << "(" << p.x << "," << p.y << ")";
}

void nhaptg(TAMGIAC& t)
{
	cout << "Nhap dinh A: \n";
	nhap(t.a);
	cout << "Nhap dinh B: \n";
	nhap(t.b);
	cout << "Nhap dinh C: \n";
	nhap(t.c);
}

void xuattg(TAMGIAC t)
{
	cout << "Toa do dinh A la: ";
	xuat(t.a);
	cout << "\nToa do dinh B la: ";
	xuat(t.b);
	cout << "\nToa do dinh C la: ";
	xuat(t.c);
}

float kc(DIEM m, DIEM n)
{
	return ((n.x - m.x) * (n.x - m.x) + (n.y - m.y) * (n.y - m.y));
}


float dientich(TAMGIAC s)
{
	float a = kc(s.a, s.b);
	float b = kc(s.b, s.c);
	float c = kc(s.c, s.a);
	float p = (float)(a + b + c) / 2;
	return (float)sqrt(p * (p - a) * (p - b) * (p - c));
}

float chuvi(TAMGIAC p)
{
	float a = kc(p.a, p.b);
	float b = kc(p.b, p.c);
	float c = kc(p.c, p.a);
	return a + b + c;
}

DIEM trongtam(TAMGIAC g)
{
	DIEM tt;
	tt.x = (g.a.x + g.b.x + g.c.x) / 3;
	tt.y = (g.a.y + g.b.y + g.c.y) / 3;
	return tt;
}
