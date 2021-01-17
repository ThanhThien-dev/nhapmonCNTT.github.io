#include <iostream>
using namespace std;
int main()
{
	cout << "BAI NAY THI DO NHA!!!!!";
	int n;
	cin >> n;
    int dem = 0;
    int i = 1;
	while (i<=n)
	{
		if (n%i==0)
		{
			dem++;
		}
		i++;
	}
	if (dem == 2)
		cout << "So nay la so Nguyen To";
	else
		cout << "So nay khong phai so Nguyen To";
	return 1;
}