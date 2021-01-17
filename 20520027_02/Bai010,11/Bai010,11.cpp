#include<iostream>
using namespace std;
void nhap(float&, float&, float&, float&, float&, float&);
float*kc(float, float, float, float, float, float);
float chuvi(float, float, float);
float dientich(float, float, float);

int main()
{
	float x1, y1, x2, y2, x3, y3;
	nhap(x1, y1, x2, y2, x3, y3);
	float* valueArray = kc(x1, y1, x2, y2, x3, y3);
	for (int i = 0; i < 3; i++) 
	{
		cout << "value " << i <<": "<< valueArray[i] << "\n";
	}

	// valueArray[0] to get value, *valueArray to get location value
	cout << "Bai 10:\nChu vi: " << chuvi(valueArray[0], valueArray[1], valueArray[2]) << "\n";
	//cout << kc(x1, y1, x2, y2, x3, y3) << "\n"; // return dia chi, k phai value
	cout << "Bai 11:\nDien tich: " << dientich(valueArray[0], valueArray[1], valueArray[2]);

	return 1;
}

void nhap(float& x1, float& y1, float& x2, float& y2, float& x3, float& y3)
{
	cout << "x1 = ";
	cin >> x1;

	cout << "y1 = ";
	cin >> y1;

	cout << "x2 = ";
	cin >> x2;

	cout << "y2 = ";
	cin >> y2;

	cout << "x3 = ";
	cin >> x3;

	cout << "y3 = ";
	cin >> y3;
}

// float* => return location value
float* kc(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float A = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	//cout << "AB = " << A;
	float B = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	//cout << "\nBC = " << B;
	float C = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	//cout << "\nCA = " << C;

	// init by a
	//float* a = new float[3]{ A,B,C };

	// dont need to use a
	return new float[3]{ A,B,C };
}

float chuvi(float a, float b, float c)
{
	float chuvi = 0;
	chuvi = a + b + c;
	return chuvi;
}

float dientich(float a, float b, float c) 
{
	float dientich;
	float p = (1.0 / 2) * chuvi(a,b,c);
	dientich = (float)sqrt(p * (p - a) * (p - b) * (p - c));
	return dientich;
}

//Cách khác:
//#include<iostream>
//using namespace std;
//void nhap(float&, float&, float&, float&, float&, float&);
//float kc(float, float, float, float);
//
//
//int main()
//{
//	float x1, y1, x2, y2, x3, y3;
//	nhap(x1, y1, x2, y2, x3, y3);
//	float a, b, c;
//	a = kc(x1, y1, x2, y2);
//	b = kc(x2, y2, x3, y3);
//	c = kc(x3, y3, x1, y1);
//	cout << "BAI 10:\nChu vi la: " << a+b+c;
//
//	return 1;
//}
//
//void nhap(float& x1, float& y1, float& x2, float& y2, float& x3, float& y3)
//{
//	cout << "x1 = ";
//		cin >> x1;
//	
//		cout << "y1 = ";
//		cin >> y1;
//	
//		cout << "x2 = ";
//		cin >> x2;
//	
//		cout << "y2 = ";
//		cin >> y2;
//	
//		cout << "x3 = ";
//		cin >> x3;
//	
//		cout << "y3 = ";
//		cin >> y3;
//}
//
//float kc(float a, float b, float c, float d)
//{
//	float kc = 0;
//	kc= sqrt((c - a) * (c - a) + (d - b) * (d - b));
//	return kc;
//}

