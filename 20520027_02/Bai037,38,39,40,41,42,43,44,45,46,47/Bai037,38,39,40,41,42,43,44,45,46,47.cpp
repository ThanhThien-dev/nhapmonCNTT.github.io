#include<iostream>
using namespace std;
void nhap(int&);
int s37(int);
int s38(int);
float s39(int);
int s40(int);
int s41(int);
float s42(int);
float s43(int);
float s44(int);
float s45(int);
float s46(int);
float s47(int);

int main()
{
	int n;
	nhap(n);
	cout << "BAI37:\nS = " << s37(n);
	cout << "\nBAI38:\nS = " << s38(n);
	cout << "\nBAI39:\nS = " << s39(n);
	cout << "\nBAI40:\nS = " << s40(n);
	cout << "\nBAI41:\nS = " << s41(n);
	cout << "\nBAI42:\nS = " << s42(n);
	cout << "\nBAI43:\nS = " << s43(n);
	cout << "\nBAI44:\nS = " << s44(n);
	cout << "\nBAI45:\nS = " << s45(n);
	cout << "\nBAI46:\nS = " << s46(n);
	cout << "\nBAI47:\nS = " << s47(n);

	return 1;
}

void nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}

int s37(int n)
{
	int s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + i * i * i;
		i++;
	}
	return s;
}

int s38(int n)
{
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + i * i * i * i;
		i++;
	}
	return s;
}

float s39(int n)
{
	float s = 1;
	int i = 1;
	while (i<=n)
	{
		s = s * (1 + (1.0 / i * i));
		i++;
	}
	return s;
}

int s40(int n)
{
	int s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + (i * (i + 1));
		i++;
	}
	return s;
}

int s41(int n)
{
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (i * (i + 1) * (i + 2));
		i++;
	}
	return s;
}

float s42(int n)
{
	float s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + (1.0 / (i * (i + 1)));
		i++;
	}
	return s;
}

float s43(int n)
{
	float s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + (1.0 / (i * (i + 1) * (i + 2)));
		i++;
	}
	return s;
}

float s44(int n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (1.0 / (i * (i + 1) * (i + 2) * (i + 3)));
		i++;
	}
	return s;
}

float s45(int n)
{
	float s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + (1.0 / (sqrt(i) + sqrt(i + 1)));
		i++;
	}
	return s;
}

float s46(int n)
{
	float s = 0;
	int i = 1;
	while (i<=n)
	{
		s = s + (1.0 / ((i + 1) * sqrt(i) + i * sqrt(i + 1)));
		i++;
	}
	return s;
}

float s47(int n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + sqrt(1+(1.0/(i*i))+(1.0/(i+1)*(i+1)));
		i++;
	}
	return s;
}