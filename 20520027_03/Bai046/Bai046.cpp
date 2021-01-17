#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
bool ktnt(int);
int tongnt(int[], int);
int soluongnt(int[], int);
float tbc(int[], int);


int main()
{
	int a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);

	cout << "\nTrung binh cong cac so nguyen to trong mang la: " << tbc(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

bool ktnt(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

int tongnt(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktnt(a[i]))
			s += a[i];
	}
	return s;
}

int soluongnt(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktnt(a[i]))
			dem++;
	}
	return dem;
}

float tbc(int a[], int n)
{
	float kq = 0;
	kq = (float)tongnt(a, n) / soluongnt(a, n);
	return kq;
}