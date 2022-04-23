#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

void nhap(float &a, float &b, float &c)
{
    cout << "Nhap a = ";    cin >> a;
    cout << "Nhap b = ";    cin >> b;
    cout << "Nhap c = ";    cin >> c;
}
int Gpt(float a, float b, float c, float &x1, float &x2)
{
        if (a == 0)
            return 1;
        else
        {

            float delta = b*b - 4*a*c;
            if (delta < 0)
                return 2;
            else
            {
                x1 = (-b + sqrt(delta)) / (2*a);
                x2 = (-b - sqrt(delta)) / (2*a);
                return 3;
            }
        }
}

int main()
{
    float a, b, c, x1, x2;
    nhap(a, b, c);
    int k = Gpt(a, b, c, x1, x2);
    if (k == 1)
        cout << "Day khong phai la phuong trinh bac 2.";
    else if(k == 2)
        cout << "Phuong trinh vo nghiem.";
    else if(k == 3)
    {
        cout << "Phuong trinh co nghiem: \n";
        cout << "x1 = " << x1 << "\t" << "x2 = " << x2;
    }
    getch();
}
