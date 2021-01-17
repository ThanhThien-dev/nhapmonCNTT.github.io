#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void nhap(DIEM&);
void xuat(DIEM);
float kc(DIEM, DIEM);
float kcx(DIEM, DIEM);
float kcy(DIEM, DIEM);
float kcgoc(DIEM, DIEM);
DIEM dxgoc(DIEM);
DIEM dxtruchoanh(DIEM);
DIEM dxtructung(DIEM);
DIEM phangiac1(DIEM);
DIEM phangiac2(DIEM);
int kttrung(DIEM, DIEM);
int ktphantu1(DIEM);
int ktphantu2(DIEM);
int ktphantu3(DIEM);
int ktphantu4(DIEM);

int main()
{
	DIEM a, b;
	cout << "Nhap toa do diem 1: \n";
	nhap(a);
	cout << "Nhap toa do diem 2: \n";
	nhap(b);
	cout << "Toa do diem 1: ";
	xuat(a);
	cout << "\nToa do diem 2: ";
	xuat(b);

	cout << "\nDiem doi xung A qua goc toa do: ";
	xuat(dxgoc(a));

	cout << "\nKhoang cach 2 diem: " << kc(a, b);
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

float kc(DIEM m, DIEM n)
{
	return sqrt(((m.x - n.x) * (m.x - n.x)) + ((m.y) * (m.y) + (n.y) * (n.y)));
}

float kcx(DIEM m, DIEM n)
{
	return abs(m.x - n.x);
}

float kcy(DIEM m, DIEM n)
{
	return abs(m.y - n.y);
}

float kcgoc(DIEM h)
{
	return sqrt(h.x * h.x + h.y * h.y);
}

DIEM dxgoc(DIEM h)
{
	DIEM temp;
	temp.x = -h.x;
	temp.y = -h.y;
	return temp;
}

DIEM dxtruchoanh(DIEM h)
{
	DIEM temp;
	temp.x = h.x;
	temp.y = -h.y;
	return temp;
}

DIEM dxtructung(DIEM h)
{
	DIEM temp;
	temp.x = -h.x;
	temp.y = h.y;
	return temp;
}

DIEM phangiac1(DIEM h)
{
	DIEM temp;
	temp.x = h.y;
	temp.y = h.x;
	return temp;
}

DIEM phangiac2(DIEM h)
{
	DIEM temp;
	temp.x = -h.y;
	temp.y = -h.x;
	return temp;
}

int kttrung(DIEM m, DIEM n)
{
	if (m.x == n.x && m.y == n.y)
		return 1;
	return 0;
}

int ktphantu1(DIEM h)
{
	if (h.x > 0 && h.y > 0)
		return 1;
	return 0;
}

int ktphantu2(DIEM h)
{
	if (h.x < 0 && h.y > 0)
		return 1;
	return 0;
}

int ktphantu3(DIEM h)
{
	if (h.x < 0 && h.y < 0)
		return 1;
	return 0;
}

int ktphantu4(DIEM h)
{
	if (h.x > 0 && h.y < 0)
		return 1;
	return 0;
}