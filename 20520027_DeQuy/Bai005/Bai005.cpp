#include<iostream>
using namespace std;
long fibo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = fibo(n);
	cout << "Day Fibonaci la: " << kq;
	return 1;
}

long fibo(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	long a = fibo(n - 1);
	long b = fibo(n - 2);
	return (a + b);
}
