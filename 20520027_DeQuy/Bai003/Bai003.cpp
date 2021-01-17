#include<iostream>
using namespace std;
int giaithua(int);

int main()
{
	int k;
	cin >> k;
	cout << k++;
	cout << endl;
	cout << ++k;
	return 1;
}

int giaithua(int k)
{
	if (k == 0)
		return 1;
	return (giaithua(k - 1) * k);
}
