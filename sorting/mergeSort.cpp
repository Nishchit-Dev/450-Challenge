#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int> &v, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> tempV;
    while (left <= mid && right <= high)
    {
        if (v[left] > v[right])
        {
            tempV.push_back(v[right]);
            right++;
        }
        else
        {
            tempV.push_back(v[left]);
            left++;
        }
    }

    while (left <= mid)
    {
        tempV.push_back(v[left]);
        left++;
    }
    while (right <= high)
    {
        tempV.push_back(v[right]);
        right++;
    }

    for (int i = low; i < high; i++)
    {
        v[i] = tempV[i - low];
    }
}

void mergeSort(vector<int> &v, int low, int high)
{

    if (low == high)
        return ;
    int mid = (low + high) / 2;
    mergeSort(v, low, mid);
    mergeSort(v, mid + 1, high);
    merge(v, low, mid, high);
}

int main()
{
    int size;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        cin >> temp;
        v.push_back(temp);
    }

    for (auto data : v)
    {
        cout << data << " ";
    }

    mergeSort(v, 0, v.size() - 1);

    cout << "\n";

    for (auto data : v)
    {
        cout << data << " ";
    }
}