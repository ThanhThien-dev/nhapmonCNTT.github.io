#include<iostream>
using namespace std;
void nhap(float&);
float doc(float);

int main()
{
	float f;
	nhap(f);
	cout << "Do C la: " << doc(f);
	return 1;
}

void nhap(float& f)
{
	cout << "Nhap do F: ";
	cin >> f;
}

float doc(float f)
{
	float c;
	return c = ((float)5 / 9) * f - 32;
}

