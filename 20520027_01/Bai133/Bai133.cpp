#include<iostream>
using namespace std;
int main() {
    int x, y, z;
    cout << "Nhap vao canh x: ";
    cin >> x;
    cout << "Nhap vao canh y: ";
    cin >> y;
    cout << "Nhap vao canh z: ";
    cin >> z;
    if (x <y+ z &&y< x + z && z < x + y) {
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
    return 0;
}