#include<iostream>
using namespace std;
void nhap(int&, int&, int&);
void bai133(int, int, int);
void bai134(int, int, int);

int main()
{
	int x, y, z;
    nhap(x, y, z);
    cout << "BAI133:\n";
    bai133(x, y, z);
    cout << "\nBAI134:\n";
    bai134(x, y, z);
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

void bai133(int x, int y, int z)
{
    if (x < y + z && y < x + z && z < x + y) {
        if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
            cout << "Day la tam giac vuong";
        else if (x == y && y == z)
            cout << "Day la tam giac deu";
        else if (x == y || x == z || y == z)
            cout << "Day la tam giac can";
        else if (x * x > y * y + z * z || y * y > x * x + z * z || z * z > x * x + y * y)
            cout << "Day la tam giac tu";
        else
            cout << "Day la tam giac nhon";
    }
    else
        cout << "Ba canh x, y, z khong phai la ba canh cua mot tam giac";
}

void bai134(int x, int y, int z)
{
    if (x <= y && y <= z)
        cout << "Bat dang thuc dung";
    else
        cout << "Bat dang thuc sai";
}
