#include<iostream>
using namespace std;

void nhap(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void xuat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = " << a[i][j] << "\t";
            if (j == n - 1)
            {
                cout << "\n";
            }
        }
    }
}



int main()
{
    int a[100][100], m, n;
    cout << "Nhap so dong: ";   cin >> m;
    cout << "Nhap so cot: ";    cin >> n;
    nhap(a, m, n);
    xuat(a, m, n);
}
