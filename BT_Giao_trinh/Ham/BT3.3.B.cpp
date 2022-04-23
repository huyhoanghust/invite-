#include<iostream>
#include<math.h>
using namespace std;

int F(float x, int n)
{
    if (n == 1)
        return x + 2017;
    else
        return pow(x, n) + F(x, n-1);
}

int main()
{
    float x;
    int n;
    cout << "nhap x = ";    cin >> x;
    cout << "nhap n = ";    cin >> n;

    cout << "KQ = " << F(x, n);
}
