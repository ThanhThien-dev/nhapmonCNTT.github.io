#include<iostream>
#include<iomanip>
using namespace std;
void nhap(int&);
void lietke(int);
int tong(int);
int tich(int);
int dem(int);
void uocle(int);
int tonguocchan(int);
int tichuocle(int);
int demuocchan(int);
int tongnhohonn(int);

int main()
{
	int n;
	nhap(n);
	cout << "BAI 49:\n";
	lietke(n);
	cout << "\nBAI 50:";
	cout << "\nTong cac uoc so cua " << n << " la: " << tong(n);
	cout << "\nBAI 51:";
	cout << "\nTich cac uoc so cua " << n << " la: " << tich(n);
	cout << "\nBAI 52:";
	cout << "\nSo luong cac uoc so cua " << n << " la: " << dem(n);
	cout << "\nBAI 53:";
	uocle(n);
	cout << "\nBAI 54:";
	cout << "\nTong cac uoc so chan cua " << n << " la: " << tonguocchan(n);
	cout << "\nBAI 55:";
	cout << "\nTich cac uoc so le cua " << n << " la: " << tichuocle(n);
	cout << "\nBAI 56:";
	cout << "\nSo luong cac uoc so chan cua " << n << " la: " << demuocchan(n);
	cout << "\nBAI 57:";
	cout << "\nTong cac uoc so nho hon " << n << " la: " << tongnhohonn(n);
	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

void lietke(int n)
{
	int i = 1;
	cout << "Cac uoc so cua " << n << " la: ";
	while (i<=n)
	{
		if (n % i == 0)
			cout << i << setw(6);
		i++;
	}
}

int tong(int n)
{
	int i = 1;
	int s = 0;
	while (i <= n)
	{
		if (n % i == 0)
			s = s + i;
		i++;
	}
	return s;
}

int tich(int n)
{
	int s = 1;
	int i = 1;
	while (i<=n)
	{
		if (n % i == 0)
			s = s * i;
		i++;
	}
	return s;
}

int dem(int n)
{
	int dem = 0;
	int i = 1;
	while (i<=n)
	{
		if (n % i == 0)
			dem++;
		i++;
	}
	return dem;
}

void uocle(int n)
{
	int i = 1;
	cout << "\nUoc le la: ";
	while (i<=n)
	{
		if (n % i == 0)
			if (i % 2 != 0)
				cout << i << setw(6);
		i++;
	}
}

int tonguocchan(int n)
{
	int s = 0;
	int i = 2;
	while (i<=n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 2;
	}
	return s;
}

int tichuocle(int n)
{
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		if (n % i == 0)
			t = t * i;
		i = i + 2;
	}
	return t;
}

int demuocchan(int n)
{
	int dem = 0;
	int i = 2;
	while (i<=n)
	{
		if (n % i == 0)
			dem = dem++;
		i = i += 2;
	}
	return dem;
}

int tongnhohonn(int n)
{
	int s = 0;
	int i = 1;
	while (i<n)
	{
		if (n % i == 0)
			s = s + i;
		i++;
	}
	return s;
}
