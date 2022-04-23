#include<iostream>
#include<utility>
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
    cout << "Ma tran la: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
            if (j == n - 1)
            {
                cout << "\n";
            }
        }
    }
}

std::pair<int, int> TimKiem(int a[][100], int m, int n, int v)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == v)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int a[100][100];
    int m, n;
    cin >> m >> n;
    nhap(a, m, n);
    xuat(a, m, n);
    std::pair<int, int> rs = TimKiem(a, m, n, 3);
    cout <<"{" << rs.first << ", " << rs.second << "}";
}
