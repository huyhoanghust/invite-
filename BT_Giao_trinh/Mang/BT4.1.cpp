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

float M(float a[], int n)
{
    float max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

float m(float a[], int n)
{
    float min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    float arr[100];
    int n;
    cout << "nhap n = ";    cin >> n;

    nhap(arr, n);
    xuat(arr, n);

    cout << "max = " << M(arr, n);
    cout << "\nmin = " << m(arr, n);
}
