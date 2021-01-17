#include<iostream>
using namespace std;

int main()
{
	int n, t;
	cout << "Nhap n: \n";
	cin >> n;
	t = (n / 100) % 10;
	cout << "Chu so hang tram la: " << t;
	return 1;
}