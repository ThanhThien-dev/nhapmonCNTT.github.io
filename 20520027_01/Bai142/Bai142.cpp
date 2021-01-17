#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap n: ";
	int n,dv;
	cin >> n;
	int dn = 0;
	int t = n;
	while (t!=0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	cout << "chu so dao nguoc la: " << dn;
	return 1;
}