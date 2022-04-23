#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
    }while (n <= 0);
// Một số là số chính phương khi căn bậc 2 của nó là 1 số nguyên
    if (sqrt(n) == (int)sqrt(n))
    {
        cout << "La so chinh phuong!";
    }
    else
    {
        cout << "Khong la so chinh phuong!";
    }
    return 0;
}
