#include <stdio.h>
#include <iostream>

using namespace std;

int GCD(int x1, int x2)
{

    int gcd = 0;
    for (int i = min(x1, x2); i * i >= 1; i--)
    {
        if (x1 % i == 0 && x2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    // cout << "gcd -> " << gcd;
    return 0;
}

int GCD_Optimized(int x1, int x2)
{

    int a = min(x1, x2);
    int b = max(x1, x2);

    while (a > 0 || b > 0)
    {

        if (b > a)
        {
            b = b % a;
        }
        else
        {
            a = a % b;
        }

        if (a <= 0)
        {
            cout << b;
            break;
        }
        else if (b <= 0)
        {
            cout << a;
            break;
        }
    }
}
int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    // GCD(n1, n2);
    if (n1 > 0 && n2 > 0)
    {
        GCD_Optimized(n1, n2);
    }
    else
    {
        cout << "zero";
    }
}