#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &v, int i1, int i2)
{
    int temp = v[i1];
    v[i1] = v[i2];
    v[i2] = temp;
}

void InsertionSort(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (v[j] < v[j - 1])
            {
                swap(v, j, j - 1);
            }
        }
    }
}

void InsertionSortOptmizied(vector<int> &v)
{
    for (int i = 1; i < v.size(), ; i++)
    {
        int j = i; 
        while (j > 0 && v[j - 1] > v[j])
        {
            swap(v, j - 1, j);
            j--; 
        }
    }
}

int main()
{
    int size = 0;
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

    InsertionSort(v);

    for (auto data : v)
    {
        cout << data << " ";
    }
}