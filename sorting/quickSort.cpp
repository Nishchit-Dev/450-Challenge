#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &v, int i1, int i2)
{
    int temp = v[i2];
    v[i2] = v[i1];
    v[i1] = temp;
}

int findPivotIndex(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (v[i] <= pivot && i <= high)
        {
            i++;
        }

        while (v[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(v, i, j);
        }
    }
    swap(v, low, j);

    return j;
}

void QuickSort(vector<int> &v, int low, int high)
{

    if (low <= high)
    {
        int pivoit = v[low];
        int mid = (low + high) / 2;
        int pivotIndex = findPivotIndex(v, low, high);
        QuickSort(v, low, pivotIndex - 1 );
        QuickSort(v, pivotIndex + 1, high);
    }
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
    cout << endl;
    QuickSort(v, 0, v.size() - 1);
    for (auto data : v)
    {
        cout << data << " ";
    }
}