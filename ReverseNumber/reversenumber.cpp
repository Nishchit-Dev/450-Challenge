#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int reverse(int x)
{
  
    int flag = false;

    if (x < 0)
    {
        flag = true;
        x = -x;
    }

    // int iter = (int)(log10(x) + 1);
    int i = 0;
    double final_num = 0;

    while (x > 0)
    {

        int curr_num = x % 10;
        x /= 10;

        final_num = final_num * 10 + curr_num;
        i++;
    }

    if (flag)
    {
        final_num = final_num * -1;
    }

    if( )
    return final_num;
}

int main()
{
    int num=10101;
    cin>>num;
    int result = reverse(num);
    cout << result;
}