#include<iostream>
using namespace std;

int scs(int n)
{
    if (n < 10)
        return 1;
    else
        return scs(n/10) + 1;
}

int main()
{
    int n;
    cout << "nhap n = ";    cin >> n;
    cout << "so chu so cua " << n << " la: " << scs(n);
}
