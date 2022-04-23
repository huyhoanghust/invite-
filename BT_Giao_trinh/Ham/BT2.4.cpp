#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout << "nhap n = ";    cin >> n;

    int T = 0, D = 0;
    for (int i = 2; i <= n; i++)
    {
        bool p = 1; float k = sqrt(i);
        for (int j = 2; j <= k; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }
        if(p)
        {
            T += i;
            D++;
        }
    }

    cout << "Tong cac so nguyen to = " << T << "\n";
    cout << "So cac so nguyen to la: " << D;
}
