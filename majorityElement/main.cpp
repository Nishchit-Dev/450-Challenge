#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int maj = 0;
    unordered_map<int, int> map;
    for (int x : nums)
    {
        if (map[x]++ + 1 > nums.size() / 2)
        {
            maj = x;
            break;
        }
    }
    return maj;
}

int main()
{
    vector<int> vec;
    int num;
    while (cin >> num)
    {
        vec.push_back(num);
    }

    int k = majorityElement(vec);
    cout << k;
    return 0;
}