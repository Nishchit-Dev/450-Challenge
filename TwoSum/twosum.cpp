#include <stdio.h>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void optimalSolution(vector<int> &v, int k)
{
    // sorting array
    sort(v.begin(), v.end());

    int n = v.size();
    int left = 0;
    int right = n - 1;

    while (left < right)
    {

        int sum = v[left] + v[right];
        if (sum > k)
        {
            right--;
        }
        else if (sum < k)
        {
            left++;
        }
        else if (sum == k)
        {
            cout << left - 1 << " && " << right ;

            break;
        }
    }
}

void findingBetterSolution(vector<int> &v, int k)
{
    unordered_map<int, int> _map;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int num = v[i];

        int left = k - v[i];
        if (_map.find(left) != _map.end())
        {
            cout << _map[left] << " && " << i;
        }

        _map[v[i]] = i;
    }
}

void findingBetterSolution2(vector<int> &v, int k)
{
    unordered_map<int, int> _map;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int num = v[i];

        int left = k - v[i];
        if (_map.find(left) != _map.end())
        {
            cout << _map[left] << " && " << i;
        }
        _map[i] = i;
    }
}

void findIndexWithSumofK(vector<int> v, int k)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (v[i] + v[j] == k)
            {
                cout << "i: " << v[i] << " j: " << v[j];
                return;
            }
        }
    }
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
    // findIndexWithSumofK(v, 8);
    // findingBetterSolution(v, 14);
    // findingBetterSolution2(v, 14);
    optimalSolution(v,14);
    return 0;
}