#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, count = 0;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
        if(n <= 0)
        {
            cout << "Vui long nhap lai gia tri n (n > 0)";
        }
    }while (n <= 0);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << "\t";
            count++;
        }
    }
    cout << "\nSo uoc: " << count;
    getch();
}
