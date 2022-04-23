#include<iostream>
using namespace std;

int GT(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n*GT(n-1);
}

int main()
{
    int a, b;
    cout << "nhap a = ";    cin >> a;
    cout << "nhap b = ";    cin >> b;

    cout << "BT can tim = " <<(float) (GT(a) +GT(b))/GT(a+b);
    return 0;
}
