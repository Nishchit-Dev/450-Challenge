#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void FindUnion(vector<int> v1, vector<int> v2, int n, int m)
{
    vector<int> result;
    int v1Size = 0;
    int v2Size = 0;

    while (v1Size < n && v2Size < m)
    {

        if (v1[v1Size] < v2[v2Size])
        {
            if (result.empty() || result.back() != v1[v1Size])
            {
                result.push_back(v1[v1Size]);
            }
            v1Size++;
        }
        else if (v2[v2Size] < v1[v1Size])
        {
            if (result.empty() || v2[v2Size] != result.back())
            {
                result.push_back(v2[v2Size]);
            }
            v2Size++;
        }
        else
        {
            if (result.empty() || result.back() != v1[v1Size])
            {
                result.push_back(v1[v1Size]);
            }
            v1Size++;
            v2Size++;
        }
    }

    while (v1Size < n)
    {
        if (result.empty() || result.back() != v1[v1Size])
        {
            result.push_back(v1[v1Size]);
        }
        v1Size++;
    }

    while (v2Size < m)
    {
        if (result.empty() || result.back() != v2[v2Size])
        {
            result.push_back(v2[v2Size]);
        }
        v2Size++;
    }

    for (auto data : store)
    {
        cout << data << " ";
    }

    return result;
}
int main()
{
    vector<int> v1;
    vector<int> v2;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        cin >> temp;
        v1.push_back(temp);
    }

    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        cin >> temp;
        v2.push_back(temp);
    }
    FindUnion(v1, v2, v1.size(), v2.size());
    return 0;
}