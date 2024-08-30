#include <stdio.h>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

struct data
{
    int value = 0;
    int noOfTimes = 0;
};

int removeDuplicates(vector<int> &nums)
{
    unordered_map<int, data> map;
    
    for (int i = 0; i < nums.size(); i++)
    {
       
    }

    for (int x :nums)
    {
        cout<<x<<" ";
    }
    return 1;
}

int main()
{

    vector<int> arr;
    int i;
    while (cin >> i)
    {
        arr.push_back(i);
    }

    int k = removeDuplicates(arr);
    cout << endl
         << k;

    return 0;
}