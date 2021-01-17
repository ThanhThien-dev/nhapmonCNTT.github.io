#include<iostream>
using namespace std;
void nhap(int&);
int tong(int);
int dem(int);
int tich(int);
int demsole(int);
int tongsochan(int);
int tichsole(int);
int solonnhat(int);
int sonhonhat(int);
int ktsochan(int);
int ktsole(int);

int main()
{
	int n;
	nhap(n);
	cout << "BAI 58:\nTong cac chu so la: " << tong(n);
	cout << "\nBAI 59:\nSo luong cac chu so la: " << dem(n);
	cout << "\nBAI 60:\nTich cac chu so la: " << tich(n);
	cout << "\nBAI 61:\nSo luong cac chu so le la: " << demsole(n);
	cout << "\nBAI 62:\nTong cac chu so chan la: " << tongsochan(n);
	cout << "\nBAI 63:\nTich cac chu so le la: " << tichsole(n);
	cout << "\nBAI 64:\nChu so lon nhat la: " << solonnhat(n);
	cout << "\nBAI 65:\nChu so nho nhat la: " << sonhonhat(n);
	cout << "\nBAI 66: Kiem tra so chan\n";
	if (ktsochan(n)==1)
	{
		cout << n << " co chu so chan.";
	}
	else
	{
		cout << n << " khong co chu so chan.";
	}
	cout << "\nBAI 67: Kiem tra so le\n";
	if (ktsole(n)==1)
	{
		cout << n << " co ton tai so le.";
	}
	else
	{
		cout << n << " khong ton tai so le.";
	}

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int tong(int n)
{
	int s = 0;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		s = s + dv;
		t = t / 10;
	}
	return s;
}

int dem(int n)
{
	int dem = 0;
	int t = n;
	while (t!=0)
	{
		dem = dem++;
		t = t / 10;
	}
	return dem;
}

int tich(int n)
{
	int kq = 1;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		kq = kq * dv;
		t = t / 10;
	}
	return kq;
}

int demsole(int n)
{
	int dem = 0;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv%2!=0)
		{
			dem = dem++;
		}
		t = t / 10;
	}
	return dem;
}

int tongsochan(int n)
{
	int s = 0;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv%2==0)
		{
			s = s + dv;
		}
		t = t / 10;
	}
	return s;
}

int tichsole(int n)
{
	int kq = 1;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv%2==1)
		{
			kq = kq * dv;
		}
		t = t / 10;
	}
	return kq;
}

int solonnhat(int n)
{
	int lc = n % 10;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv>=lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	return lc;
}

int sonhonhat(int n)
{
	int lc = n % 10;
	int t = n;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv<=lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	return lc;
}

int ktsochan(int n)
{
	int t = n;
	int flag = 0;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv%2==0)
		{
			flag = 1;
		}
		t = t / 10;
	}
	return flag;
}

int ktsole(int n)
{
	int flag = 0;
	int t = n;
	while (t!=0)
	{
		int dv = t / 10;
		if (dv%2==1)
		{
			flag = 1;
		}
		t = t / 10;
	}
	if (flag == 1)
		return 1;
	return 0;
}
