#include<iostream>
using namespace std;
void nhap(int&, int&);
float bai073(float, float);
float bai074(float, float);
float bai075(float, float);
float bai076(float, float);

int main()
{
	int x, n;
	nhap(x, n);
	cout << "BAI 73:\nS = " << bai073(x, n);
	cout << "\nBAI 74:\nS = " << bai074(x, n);
	cout << "\nBAI 75:\nS = " << bai075(x, n);
	cout << "\nBAI 76:\nS = " << bai076(x, n);

	return 1;
}

void nhap(int& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}

float bai073(float x, float n)
{
	float s = 0;
	float t = 1;
	float m = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m + i;
		s = s + (float)t / m;
		i++;
	}
	return s;
}

float bai074(float x, float n)
{
	float s = 0;
	float t = 1;
	float m = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + (float)t / m;
		i++;
	}
	return s;
}

float bai075(float x, float n)
{
	float s = 1;
	float t = 1;
	float m = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + (float)t / m;
		i = i + 2;
	}
	return s;
}

float bai076(float x, float n)
{
	float s = 1 + x;
	float t = x;
	float m = 1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + (float)t / m;
		i = i + 2;
	}
	return s;
}
