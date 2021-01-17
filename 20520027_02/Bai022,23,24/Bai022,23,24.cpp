#include<iostream>
using namespace std;
void nhap(int&);
int hdv(int);
int hc(int);
int ht(int);

int main()
{
	int n;
	nhap(n);
	cout << "Hang don vi cua " << n << " la: " << hdv(n);
	cout << "\nHang chuc cua " << n << " la: " << hc(n);
	cout << "\nHang tram cua " << n << " la: " << ht(n);

	return 1;
}

void nhap(int& n)
{
	cout << "n = ";
	cin >> n;
}


int hdv(int n)
{
	int dv = n % 10;
	return dv;
}

int hc(int n)
{
	int hc = (n % 100)/10;
	return hc;
}

int ht(int n)
{
	int ht = (n / 100) % 10;
	return ht;
}
