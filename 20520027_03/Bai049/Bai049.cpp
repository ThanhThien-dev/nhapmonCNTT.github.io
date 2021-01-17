#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float kc(float[], int);
int dem(float[], int);
float tb(float a[], int n);

int main()
{
	float a[100];
	int n;

	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout<<"\nKhoang cach trung binh giua cac cap gia tri khong trung nhau: "<<tb(a,n);

	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
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

float kc(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
				s = s + abs(a[i] - a[j]);
			
		}
	}
	return s;
}

int dem(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
				dem++;
		}
	}
	return dem;
}

float tb(float a[], int n)
{
	float k = kc(a, n);
	int d = dem(a, n);
	if (d == 0)
		return 0;
	return (float)k/d;
}