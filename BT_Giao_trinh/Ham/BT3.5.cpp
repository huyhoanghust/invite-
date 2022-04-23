/*
    Giải hệ pt:
        ax + by = e
        cx + dy = f
*/

#include<iostream>
using namespace std;

int Ghpt(float a, float b, float e, float c, float d, float f, float &x, float &y)
{
    float D, Dx, Dy;
    D = a*d - c*b;
    Dx = e*d - f*b;
    Dy = a*f - c*e;
    if (D == 0)
    {
        if (Dx == 0 && Dy == 0)
            return 3;
        else
            return 2;
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        return 1;
    }

}

int main()
{
    float a, b, e, c, d, f, x, y;
    cout << "nhap a = ";    cin >> a;
    cout << "nhap b = ";    cin >> b;
    cout << "nhap e = ";    cin >> e;
    cout << "nhap c = ";    cin >> c;
    cout << "nhap d = ";    cin >> d;
    cout << "nhap f = ";    cin >> f;

    int k = Ghpt (a, b, e, c, d, f, x, y);
    if (k == 1)
    {
        cout << "He phuong trinh co nghiem: ";
        cout << "x = " << x << "\t" << "y = " << y;
    }
    else if(k == 2)
        cout << "He phuong trinh vo nghiem.";
    else if(k == 3)
        cout << "He phuong trinh co vo so nghiem.";
}
