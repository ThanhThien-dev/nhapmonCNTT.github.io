#include<iostream>
#include<iomanip>
using namespace std;
void lietke(int, int);

int main()
{
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	lietke(x, y);
	return 1;
}

void lietke(int x, int y)
{
	int i = x;
	cout << "Cac nam nhuan trong khoang " << x << " den " << y << " la:\n";
	while (i<=y)
	{
		int dk1 = i % 4 == 0 && i % 100 != 0;
		int dk2 = i % 400 == 0;
		if (dk1 || dk2)
			cout << i << setw(11);
		i++;
	}
}
