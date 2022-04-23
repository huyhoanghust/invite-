#include<iostream>
using namespace std;

int fact (int a)
{
    int b = 1;
    for(int i = 1; i <= a; i++) b *= i;
    return b;
}

int main()
{
    int n;
    int S;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        S += fact(i);
    }
    cout << "S = " << S << "\n";
}
