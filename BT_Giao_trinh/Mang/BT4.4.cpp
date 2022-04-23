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

/*
    Sắp xếp mảng theo chiều giảm dần rồi sắp lại các phần tử ở giữa.
        VD: (Left) 5 5 4 3 2 1 (Right)
        --> (Left) 5 5 2 3 4 1 (Right)
*/
void sapxep(float a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }

    int L = 0, R = n - 1;
    while(a[L] == a[0])
        L++;
    while(a[R] == a[n-1])
        R--;

    for(int i = L; i <= R; i++)
    {
        for(int j = i + 1; j <= R; j++)
        {
            swap(a[i], a[j]);
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
