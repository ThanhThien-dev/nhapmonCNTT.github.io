#include<iostream>
using namespace std;
void nhap(int&);
int bai137(int);
int bai138(int);

int main()
{
	int x;
	nhap(x);
	cout << "BAI137:\nf(x) = " << bai137(x);
	cout << "\nBAI138:\nf(x) = " << bai138(x);

	return 1;
}

void nhap(int& x)
{
	cout << "Nhap x: ";
	cin >> x;
}

int bai137(int x)
{
	int s = 0;
	if (x >= 5)
		s = 2 * x * x + 5 * x + 9;
	else
		s = -2 * x * x + 4 * x - 9;
	return s;
}

int bai138(int x)
{
	int s = 0;
	if (x >= 0)
	{
		if (x > 1)
			s = 2 * x * x * x + 5 * x * x - 8 * x + 3;
		else
			s = 5 * x - 7;
	}
	else
		s = -2 * x * x * x + 6 * x + 9;
	return s;
}
