#include<iostream>
using namespace std;
void nhap(int&);
int bai165(int);
int bai166(int);
int bai167(int);

int main()
{
	int n;
	nhap(n);

	cout << "BAI 165:\nk = " << bai165(n);
	cout << "\nBAI 166:\nk = " << bai166(n);
	cout << "\nBAI 167:\nk = " << bai167(n);

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int bai165(int n)
{
	int t = 2;
	int k = 0;
	while (t<n)
	{
		t = t * 2;
		k++;
	}
	return k;
}

int bai166(int n)
{
	int t = 2;
	int k = 1;
	while (t < n)
	{
		t = t * 2;
		k++;
	}
	return k;
}

int bai167(int n)
{
	int s = 0;
	int k = 0;
	while (s<n)
	{
		k++;
		s = s + k;
	}
	k = k - 1;
	return k;
}