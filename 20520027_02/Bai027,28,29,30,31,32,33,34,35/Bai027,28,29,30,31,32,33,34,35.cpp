#include<iostream>
using namespace std;
void nhap(int&);
float Bai027(float);
float Bai028(float);
float Bai029(float);
float Bai030(float);
float Bai031(float);
float Bai032(float);
float Bai033(float);
float Bai034(float);
float Bai035(float);

int main()
{
	int n;
	nhap(n);
	cout << "BaI027:\n" << "S = " << Bai027(n);
	cout << "\nBaI028:\n" << "S = " << Bai028(n);
	cout << "\nBaI029:\n" << "S = " << Bai029(n);
	cout << "\nBaI030:\n" << "S = " << Bai030(n);
	cout << "\nBaI031:\n" << "S = " << Bai031(n);
	cout << "\nBaI032:\n" << "S = " << Bai032(n);
	cout << "\nBaI033:\n" << "S = " << Bai033(n);
	cout << "\nBaI034:\n" << "S = " << Bai034(n);
	cout << "\nBaI035:\n" << "S = " << Bai035(n);

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

float Bai027(float n)
{
	float s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + i;
		i++;
	}
	return s;
}

float Bai028(float n)
{
	float s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + i * i;
		i++;
	}
	return s;
}

float Bai029(float n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (float)1/i;
		i++;
	}
	return s;
}

float Bai030(float n)
{
	float s = 0;
	int i = 2;
	while (i<=2*n)
	{
		s = s + (float)1 / i;
		i = i + 2;
	}
	return s;
}

float Bai031(float n)
{
	float s = 0;
	int i = 1;
	while (i<=2*n+1)
	{
		s = s + 1.0 / i;
		i = i + 2;
	}
	return s;
}

float Bai032(float n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + 1.0 / (i * (i + 1));
		i = i + 1;
	}
	return s;
}

float Bai033(float n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (float)i / (i + 1);
		i = i + 1;
	}
	return s;
}

float Bai034(float n)
{
	float s = 0;
	int i = 1;
	while (i <= 2*n+1)
	{
		s = s + (float)i / (i + 1);
		i = i + 2;
	}
	return s;
}

float Bai035(float n)
{
	float t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * i;
		i++;
	}
	return t;
}