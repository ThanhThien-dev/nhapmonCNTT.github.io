#include<iostream>
#include<iomanip>
using namespace std;
void nhap(float&, float&);
void bai125(float, float);
float bai126(float, float);
float bai127(float, float);
void bai128(float, float);

int main()
{
	float a, b;
	nhap(a, b);
	cout << "BAI125:\n"; bai125(a, b);
	cout << "\nBAI126: \nGia tri lon nhat la: " << bai126(a, b);
	cout << "\nBAI127: \nGia tri nho nhat la: " << bai127(a, b);
	cout << "\nBAI128:\n"; bai128(a, b);

	return 1;
}

void nhap(float& a, float& b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}

void bai125(float a, float b)
{
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	cout << "|a| = " << a;
	cout << "\n|b| = " << b;
}

float bai126(float a, float b)
{
	float lc = a;
	if (b > lc)
		lc = b;
	return lc;
}

float bai127(float a, float b)
{
	float lc = a;
	if (b < lc)
		lc = b;
	return lc;
}

void bai128(float a, float b)
{
	float temp = 0;
	if (a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	cout << "Thu tu tang dan: " << a << setw(11) << b;
}
