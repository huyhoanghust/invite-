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
            cout << "Khong thoa man. Vui long nhap lai n (n>0): ";
        }
    }while(n<=0);

        int last, min, count = 0;
        min = n % 10;
        do
        {
            last = n % 10;
            if (last < min)
            {
                min = last;
                count = 0;
            }
            if (last == min)
            {
                count ++;
            }
        }while (n /= 10);

    cout << "Chu so nho nhat la: " << min;
    cout << "\nSo chu so nho nhat la: " << count;
}
