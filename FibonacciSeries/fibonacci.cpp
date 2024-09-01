#include <stdio.h>
#include <iostream>

using namespace std;

int fibo(int &limit, int &n1 , int &n2 )
{
    cout << n1 <<" ";
    if (limit < 5)
    {
        limit++;
        int sum = n1 + n2;
        n1 = n2;
        n2 = sum;

        return fibo(limit,n1, n2);
    }else{
        return 0;

    }
}

int fiboOptimized(int n){
    if(n <=1)
        return n;
    int last = fiboOptimized(n-1);
    int slast = fiboOptimized(n-2);
    return last + slast;
}

int main()
{
    int n = 0;
    int limit = 1;
    int n1 = 0;
    int n2 = 1;
    // fibo(limit, n1, n2);

    cout<<fiboOptimized(5  );
}