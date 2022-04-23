#include<iostream>
#include<math.h>
using namespace std;

int check (int a)
{
    int count = 0;
    if (a == 1)
    {
        cout << "Khong la so nguyen to!";
    }
    else
    {
        for (int i = 1; i <= sqrt(a); i++)
        {
          if (a % i == 0)
          {
              count ++;
          }
        }
        if (count == 1)
        {
            cout << "La so nguyen to!";
        }
        else
        {
            cout << "Khong la so nguyen to!";
        }
    }

}

int main()
{
    int n;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
        if (n <= 0)
        {
            cout << "Khong thoa man. Vui long nhap lai n (n>0): ";
        }
    }while (n <= 0);
    cout << check (n) << endl;
    return 0;
}
