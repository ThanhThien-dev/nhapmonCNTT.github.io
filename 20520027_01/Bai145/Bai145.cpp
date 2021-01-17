#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int flag = 0;
	int i = 0;
	while (i<=n)
	{
		if (i * i == n)
			flag = 1;
		i++;
	}
	if (flag == 1)
	{
		cout << "La so chinh phuong";
	}
	else
	{
		cout << "khong chinh phuong";
	}
	return 1;
}