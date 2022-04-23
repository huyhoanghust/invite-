#include<iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
        if (n <= 0)
        {
            cout << "Khong thoa man. Vui long nhap lai n (n >0): ";
        }
    }while(n <= 0);
    int last, max = 0, count  = 0;

//    while(n != 0)
//    {
//        last = n % 10;
//        n /= 10;
//        if (last > max)
//        {
//            max = last;
//        }
//    }

    do
    {
        last = n % 10;
        if (last > max)
        {
            max = last;
            count = 0;
        }
        if (last == max)
        {
            count ++;
        }
    }while (n /= 10);

    cout << "Chu so lon nhat la : " << max;
    cout << "\nSo luong chu so lon nhat la: " << count;
}
