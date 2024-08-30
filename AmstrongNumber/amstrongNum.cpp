#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int Power(int temp,int _number)
{
    
    int result = 1;
    while (temp > 0)
    {
        result *= _number;
        temp--;
    }
    return result;
}

bool isAmstrongNumber(int x)
{

    int AmstrongNumber = x;
    int power = (int)(log10(x)) +1  ;
    cout << "power->" << power << endl;
    int AmstrongCheckerNumber = 0;

    while (x > 0)
    {
        int number = x % 10;
        x /= 10;
        int powered = Power(power  ,number);
        AmstrongCheckerNumber = AmstrongCheckerNumber + powered;
    }

    if (AmstrongCheckerNumber == AmstrongNumber)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
}

int main()
{
    int num = 153;

    isAmstrongNumber(num);
}