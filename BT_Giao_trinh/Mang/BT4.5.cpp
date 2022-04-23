#include<iostream>
using namespace std;

void nhap(float a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "nhap a[" << i <<"] = ";
        cin >> a[i];
    }
}
void KT(float a[], int n)
{
    int T, G, B ;
    T = G = B = 0;
    for(int i=0 ; i < n-1 ; i++)
    {
        if ( a[i] < a[i+1] ) T++;
        if ( a[i] > a[i+1] ) G++;
        if ( a[i] == a[i+1]) B++;
    }
    if(B==n-1) cout<< "Mang bang nhau";
    else if(T == n-1) cout<< "Mang tang ngat " ;
    else if(G == n-1) cout<< "Mang giam ngat" ;
    else if(T == 0 && B != 0) cout << "Mang giam" ;
    else if(G == 0 && B != 0) cout<< "Mang tang" ;
    else cout<< "Mang chua duoc sap " ;
}
int main()
{
    float a[100];
    int n ;
    cout << "Nhap n = ";
    cin>>n;

    nhap(a, n);
    KT(a, n);
    return 0;
}
