#include<iostream>
using namespace std;

int main()
{
    int n,last, count;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
    }while (n <= 0);
    if (n < 10)
    {
        count ++;
        cout << "So cac chu so: " << count;
    }
    else
    {
        cout << "So dao nguoc la: ";
        while (n != 0)
        {
            count ++;
            last = n % 10;
            n /= 10;
            cout << last;
        }
        cout << "\nSo cac chu so: " << count;
    }

}
