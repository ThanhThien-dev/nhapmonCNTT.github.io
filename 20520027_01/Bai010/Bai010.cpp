#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap x1,y1,x2,y2,x3,y3: \n";
	int x1, y1, x2, y2, x3, y3;
	cout << "x1 = ";
	cin >> x1;

	cout << "y1 = ";
	cin >> y1;

	cout << "x2 = ";
	cin >> x2;

	cout << "y2 = ";
	cin >> y2;

	cout << "x3 = ";
	cin >> x3;

	cout << "y3 = ";
	cin >> y3;

	cout << "Tinh do dai cac canh A, B, C: \n";
	int A = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "A = " << A;
	int B = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	cout << "\nB = " << B;
	int C = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	cout << "\nC = " << C;
	cout << "\nChu vi = A + B + C";
	int P = A + B + C;
	cout << "\nChu vi tam giac ABC = " << P;
	return 1;
}