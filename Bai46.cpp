#include<iostream>
#include<math.h>
using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << "a[" << i << "] = " << a[i] << "\n";
}

bool ktra(int n)
{
    if (n < 2)
        return false;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int demSNT(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(ktra(a[i]))
        {
            count ++;
        }
    }
    return count;
}

void inSNT(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(ktra(a[i]))
        {
            cout << "\t" << a[i];
        }
    }
}

int main()
{
    int a[100], n;
    cout << "nhap n = ";    cin >> n;
    nhap(a, n);
    xuat(a, n);
    inSNT(a, n);
    cout << "\nSo cac so nguyen to trong mang la: " << demSNT(a, n);
}
