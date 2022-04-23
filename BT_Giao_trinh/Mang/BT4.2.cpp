#include<iostream>
using namespace std;

void nhap(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "nhap a[" << i << "] = " ;
        cin >> a[i];
    }
}

void xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }
}

void swap(float &a, float &b)
{
    float tg;
    tg = b;
    b = a;
    a = tg;
}

void sapxep(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

int main()
{
    float arr[100];
    int n;
    cout << "nhap n = ";    cin >> n;

    nhap(arr, n);
    sapxep(arr, n);
    xuat(arr, n);
}
