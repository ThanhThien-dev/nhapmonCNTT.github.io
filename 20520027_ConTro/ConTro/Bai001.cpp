#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Test change

void Nhap(int*&, int&);
void Xuat(int[], int);


int main()
{
	int n, * a;
	 
	Nhap(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	delete[] a;
	return 0;
}

void Nhap(int*& a, int& n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	a = new int[n];
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
	{
		/*cin >> a[i];*/
		a[i] = (rand() % 201) - 100;
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << a[i];
	}
}