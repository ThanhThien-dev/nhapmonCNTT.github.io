#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "Nhap dt: \n";
	int dt;
	cin >> dt;
	dt = abs(dt);
	while (dt >= 10)
		dt = dt / 10;
	cout << "chu so dau tien la: " << dt;
	return 1;
}