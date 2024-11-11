#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void OptimalSolution(vector<int> &v, int k)
{

    long long sum = a[0];
    int maxLen = 0;
    int left = 0;
    int right = 0;
    int size = v.size();

    while (right < n)
    {

        while (left <= right && sum > k)
        {
            sum -= v[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;

        if (right < n)
        {
            sum += v[right];
        }
    }

    return maxLen;
}

void LongestSubarray(vector<int> &v, int k)
{
    map<int, int> prefixSum;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += a[i];

        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        long long rem = sum - k;

        if (prefixSum.find(rem) != prefixSum.end())
        {
            int len = i - prefixSum(rem);
            maxLen = max(maxLen, len);
        }

        if (prefixSum.find(sum) == prefixSum.end())
        {
            prefixSum[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> v;
    int size;
    cin >> size;
    int k;
    cin >> k;
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        cin >> temp;
        v.push_back(temp);
    }
    LongestSubarray(v, k);
    return 0;
}