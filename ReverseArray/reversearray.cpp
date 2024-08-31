#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int swap(vector<int> &v, int a, int b)
{
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

int reverseArray(vector<int> &x, int i)
{
    if (x.size() % 2 == 0)
    {
        if (i <= x.size() / 2)
        {
            swap(x, x.size() - i, i - 1);
            reverseArray(x, i + 1);
        }
    }
    else
    {
        if (i <= x.size() / 2 + 1)
        {
            swap(x, x.size() - i, i - 1);
            reverseArray(x, i + 1);
        }
    }
}

int reverseArray_optimized(vector<int> &x, int i)
{
    if (x.size() - i >= i)
    {
        swap(x, x.size() - i, i - 1);
        reverseArray(x, i + 1);
    }
}

int main()
{
    vector<int> arr = {0, 3, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // reverseArray(arr, 0);
    reverseArray_optimized(arr, 0);

    for (auto data : arr)
    {
        cout << data << " ";
    }
}