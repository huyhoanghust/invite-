#include<iostream>
using namespace std;

/*
        Với n < 3 thì C1 = C2 = 1
        Với n >= 3 thì:
            n = 3: C3 = C1.C2 + C2.C1;
            n = 4: C4 = C1.C3 + C2.C2 + C3.C1;
            ........
*/
int catalan(int n)
{
    if (n < 3)
        return 1;
    int T = 0;
    for (int i = 1; i < n; i++)
    {
        T = T + catalan(i)*catalan(n-i);
    }
    return T;
}

int main()
{
    int n;
    cout << "Nhap n = ";    cin >> n;
    cout << "So catalan thu " << n << " la: " << catalan(n);
}
