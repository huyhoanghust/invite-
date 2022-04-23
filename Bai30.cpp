#include<iostream>
#include<conio.h>
using namespace std;

int SumUoc (int a)
{
    int Sum;
    for(int i = 1; i < a; i++)
    {
      if (a % i == 0)
      {
          Sum += i;
      }
    }
    return Sum;
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
   }while(n <= 0);
   if (SumUoc(n) == n)
   {
       cout << n << " la so hoan hao!";
   }
   else
   {
       cout << n << " khong la so hoan hao!";
   }
   getch();
}
