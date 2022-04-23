#include<iostream>
#define MAX 100
using namespace std;

void nhap(int a[], int &n)
{
    do
    {
        cout << "Nhap n = ";
        cin >> n;
        if (n <= 0 || n > MAX)
        {
            cout << "So phan tu khong hop le. Vui long kiem tra lai. ";
        }
    }while (n <= 0 || n > MAX);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = " ;
        cin >> a[i];
    }
}

void xuat (int a[], int n)
{
    if (n == 0)
    {
       return;
    }

    xuat (a, n - 1);
    cout  << a[n - 1] << "\t";

}

int main()
{
    int n;
    int a[MAX];

    nhap (a, n);
    xuat (a, n);
}

//int gt(int n)
//{
//    if(n == 1 || n == 0)
//        return 1;
//    else
//        return n * gt(n - 1);
//}
//
//int main()
//{
//    int n = 3;
//    cout << gt(n);
//}
