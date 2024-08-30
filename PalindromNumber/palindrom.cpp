#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(int x)
{
    double final_number = 0;
    int Actual_number = x;

    if (x < 0)
    {
        return false;
    }

    while (x > 0)
    {
        int num = x % 10;
        x /= 10;
        final_number = final_number * 10 + num;
    }

    if (final_number == Actual_number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int num = 1234567899;
    cout << isPalindrome(num);
}