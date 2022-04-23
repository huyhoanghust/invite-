#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, max = 1;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
        if(n <= 0)
        {
            cout << "Vui long nhap lai n (n>0): ";
        }
    }while(n <= 0);
    for(int i = 1; i <= n; i++)
    {
        if ((n % i == 0) && (i % 2 == 1))
        {
            if (i > max)
            {
               max = i;
            }
            cout << i << "\t";
        }
    }
    cout << "\nUoc so le lon nhat la: " << max;
    getch();
}
