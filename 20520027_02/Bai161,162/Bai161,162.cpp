#include<iostream>
using namespace std;
void nhap(int&);
int tangdan(int);
int giamdan(int);

int main()
{
	int n;
	nhap(n);

	cout << "BAI 161:\n";
	if (tangdan(n) == 1)
		cout << n << " tang dan.";
	else
		cout << n << " khong tang dan.";

	cout << "\nBAI 162:\n";
	if (giamdan(n) == 1)
		cout << n << " giam dan.";
	else
		cout << n << " khong giam dan.";

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int tangdan(int n)
{
	int flag = 1;
	int sc = n % 10;
	int t = n;
	while (t!=0)
	{
		t = t / 10;
		int kb = t % 10;
		if (sc < kb)
			flag = 0;
		sc = kb;
	}
	if (flag == 1)
		return 1;
	return 0;
}

int giamdan(int n)
{
	int flag = 1;
	int t = n;
	int lc = t % 10;
	t = t / 10;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv < lc)
			flag = 0;
		t = t / 10;
		lc = dv;
	}
	if (flag == 1)
		return 1;
	return 0;
}