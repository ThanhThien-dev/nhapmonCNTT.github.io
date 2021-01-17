#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    int i = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
        i++;
    }
    if (s == n)
    {
        cout << "HT";
    }
    else
    {
        cout << "Ko HT";
    }
    return 0;
}