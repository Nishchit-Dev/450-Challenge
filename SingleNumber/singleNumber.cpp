#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void OptimalFindSingleNumber(vector<int> &v)
{
    int mul = 0;
    for (auto data : v)
    {
        mul = mul ^ data;
    }

    cout << mul << "\n";
}

int main()
{
    vector<int> v;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        cin >> temp;
        v.push_back(temp);
    }

    OptimalFindSingleNumber(v);

    return 0;
}