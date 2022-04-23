#include<iostream>
using namespace std;
#define MAXN 100

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }
}

//  C1: Sắp xếp mảng giảm dần => SỐ lớn thứ 2 là a[1].
//  C2: Tìm đồng thời số lớn nhất và số lớn thứ 2.


////C1:
//void swap (int &x, int &y)
//{
//    int tg;
//    tg = x;
//    x = y;
//    y = tg;
//}
//
//void SapXep(int a[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            if (a[i] < a[j])
//            {
//                swap (a[i], a[j]);
//            }
//        }
//    }
//}
//
//int TimMax2(int a[], int n)
//{
//    //SapXep(a, n);
//    return a[1];
//}


//C2:
int Max2(int a[], int n)
{
    int max1, max2;
    if (a[0] > a[1])
    {
        max1 = a[0];
        max2 = a[1];
    }
    else
    {
        max1 = a[1];
        max2 = a[0];
    }
    for (int i = 2; i < n; i++)
    {
        if(a[i] >= max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2)
        {
            max2 = a[i];
        }
    }
    return max2;
}

int main()
{
    int arr[MAXN];
    int n;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
    }while (n <= 1|| n > MAXN);

    NhapMang(arr, n);
//
//    SapXep(arr, n);
    XuatMang(arr, n);
//    cout << "So lon thu 2 trong mang la: " << TimMax2(arr, n);

    cout << "So lon thu 2 trong mang la: " << Max2(arr, n);
}
