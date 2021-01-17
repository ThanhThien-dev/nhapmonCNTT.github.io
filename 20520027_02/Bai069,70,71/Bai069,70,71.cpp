#include<iostream>
using namespace std;
void nhap(int&, int&);
int bai069(int, int);
int bai070(int, int);
int bai071(int, int);

int main()
{
	int x, n;
	nhap(x, n);
	cout << "BAI 69:\nS = " << bai069(x, n);
	cout << "\nBAI 70:\nS = " << bai070(x, n);
	cout << "\nBAI 71:\nS = " << bai071(x, n);

	return 1;
}

void nhap(int& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}

int bai069(int x, int n)
{
	int s = 0;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * x;
		s = s + t;
		i++;
	}
	return s;
}

int bai070(int x, int n)
{
	int s = 0;
	int t = 1;
	int i = 2;
	while (i<=2*n)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	return s;
}

int bai071(int x, int n)
{
	int s = x;
	int t = x;
	int i = 3;
	while (i<=2*n+1)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	return s;
}
