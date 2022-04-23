#include<iostream>
using namespace std;

float F(float x, int n)
{
    if
        (n == 0)
        return 1;
    else if(n == 1)
        return x;
    else
        return F(x, n - 1) * x / n ;// (x.x...x.x)/(n.n-1....2.1)
}

int main()
{
    float x;
    int n;
    cout << "nhap x = ";
    cin >> x;
    do
    {
        cout << "nhap n = ";
        cin >> n;
    }while(n < 0);
    cout << "F = " << F(x, n);
    return 0;
}
