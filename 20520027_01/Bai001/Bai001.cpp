#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap x1,y1,x2,y2: "; 
	cout << endl;
	int x1,y1,x2,y2;
	cout << "x1 = ";
	cin >> x1;

	cout << "y1 = ";
	cin >> y1;

	cout << "x2 = ";
	cin >> x2;
	
	cout << "y2 = ";
	cin >> y2;
	
	float kc = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); // float la kieu so thuc
	cout << "Khoang cach: " << kc;
	return 1;
}