#include<iostream>
using namespace std;
void nhap(float&);
float dof(float);

int main()
{
	float c ;
	nhap(c);
	cout << "Do F la: " << dof(c);
	return 1;
}

void nhap(float& c)
{
	cout << "Nhap do C: ";
	cin >> c;
}

float dof(float c)
{
	float f;
	return f = ((float)9 / 5) * c + 32;
}

