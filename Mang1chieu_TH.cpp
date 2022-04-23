#include<iostream>
using namespace std;
#define MAXN 100

//Bai tap: Viết hàm tìm GTLN trong mảng 1 chiều các số thực.

void NhapMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void XuatMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }
}

//float TimMax(float a[], int n)
//{
//    float max = a[0];
//    for (int i = 1; i < n; i++)
//    {
//        if (a[i] > max)
//        {
//            max = a[i];
//        }
//    }
//    return max;
//}
//
//int TimChiSo(float a[], int n)
//{
//    float max = a[0];
//    int ChiSo = 0;
//    for (int i = 1; i < n; i++)
//    {
//        if (a[i] > max)
//        {
//            ChiSo = i;
//        }
//    }
//    return ChiSo;
//}

float SoAmLonNhat(float a[], int n)
{
    float result = 1;
    int i = 0;
    for ( ; i < n; i++)
    {
        if(a[i] < 0)
        {
            result = a[i];
            break;
        }
    }
    if(result == 1)
    {
        return 1;
    }
    for (i += 1; i < n; i++)
    {
        if(a[i] < 0 && a[i] > result)
        {
            result = a[i];
        }
    }
    return result;
}

int main()
{
    float arr[MAXN];
    int n;
    do
    {
        cout << "Nhap n = ";
        cin >> n;
    }while (n <= 0 ||  n > MAXN);
    NhapMang(arr, n);
    XuatMang(arr, n);

    float v = SoAmLonNhat(arr, n);
    if (v >= 0)
    {
        cout << "Mang khong co so am!";
    }
    else
        cout << "So am lon nhat la: " << v;
//    cout << "Max = " << TimMax(arr, n);
//    cout << "\nChi so max la: " << TimChiSo(arr, n);
}
