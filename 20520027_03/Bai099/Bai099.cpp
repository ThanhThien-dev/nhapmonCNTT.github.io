#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
int duongdau(float[], int);
int vitri(float[], int);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);

	int kq = vitri(a, n);
	cout << "\nVi tri gia tri duong nho nhat trong mang la: " << kq;
	
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		/*cin >> a[i];*/
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << fixed << setprecision(2) << a[i];
	}
}

int duongdau(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			return i;
	}
	return 0;
}


int vitri(float a[], int n)
{
	int lc = duongdau(a, n);
	if (lc==0)
	{
		return -1;
	}
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] <= a[lc])
		{
			lc = i;
		}
	}
	return lc;
}