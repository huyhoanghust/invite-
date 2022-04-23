#include<iostream>
using namespace std;

void test(int n)
{
    if (n == 0)
        return;
    test(n - 1);

    cout << n << "\t";

}

int main()
{
    int n = 5;
    test(n);
}
