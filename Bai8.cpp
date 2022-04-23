#include<iostream>
using namespace std;

int main()
{
    int n;
    float S;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        S += (float) (2*i + 1) / (2*i + 2);
    }
    cout << "S = " << S << "\n";
}
