#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    vector<int> temp;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] != val)
        {
            temp.push_back(nums[i]);
            count++;
        }
    }
    for (int j = 0; j < nums.size(); j++)
    {
        if (j < temp.size())
        {
            nums[j] = temp[j];
        }else{
            nums[j] = 999;
        }   
    }

     for (int j = 0; j < nums.size(); j++)
    {
        cout<<nums[j] <<" ";   
    }




    return count;
}

int main()
{

    vector<int> vec;
    int num;
    while (cin >> num)
    {
        vec.push_back(num);
    }

    int k = removeElement(vec, 2);

    // cout << k;

    return 0;
}