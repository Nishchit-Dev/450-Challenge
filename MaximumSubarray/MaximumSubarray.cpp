#include <stdio.h>
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

long long subarray(vector<int> &nums)
{
    long long maxi = -99999; // maximum sum
    long long sum = 0;

    for (int i = 0; i < nums.size(); i++) {

        sum += nums[i];

        if (sum > maxi) {
            maxi = sum;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }

    // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;
    cout<<maxi;
    return maxi;
}

long long maxSubarraySum(int arr[], int n) {
    long long maxi = -9999; // maximum sum
    long long sum = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }

    // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;
    cout<<maxi;
    return maxi;
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
    subarray(v);
    return 0;
}