#include<iostream>
using namespace std;

void nhap(float a[], int n, char k)
{
    for(int i = 0; i < n; i++)
    {
        cout << "nhap " << k << i << " = ";
        cin >> a[i];
    }
}

float tvh(float x[], float y[], int n)
{
    float t = 0;
    for(int i = 0; i < n; i++)
        t += x[i]*y[i];
    return t;
}

int main()
{
    float x[100], y[100];
    int n;
    cout << "nhap n = ";    cin >> n;

    nhap(x, n, 'x');
    nhap(y, n, 'y');

    cout << "x.y = " << tvh(x, y, n);
}
