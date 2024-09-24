#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int FindMissingNumber(vector<int> v)
{

    int sum = 0;
    int n = v.size();
    int SumOfNumber = n*(n + 1) / 2;

    for (auto data : v)
    {
        sum += data;
        cout << data << " ";
    }

    cout << "\n"
         << sum -  SumOfNumber;
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

    FindMissingNumber(v);

    return 0;
}