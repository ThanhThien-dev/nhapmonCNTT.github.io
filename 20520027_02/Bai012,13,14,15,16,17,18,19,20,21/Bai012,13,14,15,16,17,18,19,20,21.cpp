#include<iostream>
using namespace std;
void nhap(int&);
int x6(int);
int x7(int);
int x32(int);
int x64(int);
int x9(int);
int x11(int);
int x12(int);
int x13(int);
int x14(int);
int x15(int);

int main()
{
	int x;
	nhap(x);
	cout << "BAI 12\nx^6 = " << x6(x);
	cout << "\nBAI 13\nx^7 = " << x7(x);
	cout << "\nBAI 14\nx^32 = " << x32(x);
	cout << "\nBAI 15\nx^64 = " << x64(x);
	cout << "\nBAI 16\nx^9 = " << x9(x);
	cout << "\nBAI 17\nx^11 = " << x11(x);
	cout << "\nBAI 18\nx^12 = " << x12(x);
	cout << "\nBAI 19\nx^13 = " << x13(x);
	cout << "\nBAI 20\nx^14 = " << x14(x);
	cout << "\nBAI 21\nx^15 = " << x15(x);

	return 1;
} 

void nhap(int& x)
{
	cout << "Nhap x: ";
	cin >> x;
}

int x6(int x)
{
	int x2 = x * x;
	int x4 = x2 * x2;
	int x6 = x2 * x4;
	return x6;
}

int x7(int x)
{
	int x7 = x6(x) * x;
	return x7;
}

int x32(int x)
{
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x16 = x8 * x8;
	int x32 = x16 * x16;
	return x32;
}

int x64(int x)
{
	int x64;
	x64 = x32(x) * x32(x);
	return x64;
}

int x9(int x)
{
	int x2 = x * x;
	int x9 = x2 * x7(x);
	return x9;
}

int x11(int x)
{
	int x2 = x * x;
	int x11 = x2 * x9(x);
	return x11;
}

int x12(int x)
{
	int x12 = x * x11(x);
	return x12;
}

int x13(int x)
{
	int x13 = x12(x) * x;
	return x13;
}

int x14(int x)
{
	int x14 = x * x13(x);
	return x14;
}

int x15(int x)
{
	int x15 = x9(x) * x6(x);
	return x15;
}









































