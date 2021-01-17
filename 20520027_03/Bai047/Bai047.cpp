#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&, float&);
void xuat(float[], int);
float tong(float[], int, int);
int soluong(float[], int, int);
float tbc(float[], int, int);

int main()
{
	float a[100];
	int n;
	float x;

	nhap(a, n, x);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "\nTrung binh cong cua gia tri lon hon " << x << " la: " << tbc(a, n, x);

	return 0;
}

void nhap(float a[], int& n,float& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		/*a[i] = -100 + rand() / (RAND_MAX / 200.0);*/
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << fixed << setprecision(2) << a[i];
	}
}

float tong(float a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		float s = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] > x)
				s += a[i];
		}
		return s;
	}
}

int soluong(float a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > x)
			dem++;
	}
	return dem;
}

float tbc(float a[], int n, int x)
{
	if (soluong(a, n, x) == 0)
		return 0;
	return (float)tong(a, n, x) / soluong(a, n, x);
}