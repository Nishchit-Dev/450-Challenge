#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <stdlib.h>
#include <vector>

using namespace std;

void printAllDivisor(int x)
{
    int sproot = (int)sqrt(x);
    vector<int> v;

    for (int i = 1; i <= sproot; i++)
    {

        if (x % i == 0)
        {
            v.push_back(i);

            if (x / i != i)
            {
                int d = x / i;
                v.push_back(d);
            }
        }
    }

    sort(v.begin(),v.end());

    for(auto y : v){
        cout<<y<<" ";
    }
}

int main()
{
    int num = 36;

    printAllDivisor(num);
}
