#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int x, y, i;
    cout << "Nhap vao nam x: ";
    cin >> x;
    cout << "Nhap vao nam y: ";
    cin >> y;
   
    i = x;
    while (i <= y)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            cout << i << setw(6);
        i++;
    }
    return 1;
}