#include <stdio.h>
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void swap(vector<int> &v, int i1, int i2)
{
    int temp = v[i1];
    v[i1] = v[i2];
    v[i2] = temp;
}

void selectionSort(vector<int> &v)
{
    // find minimun and swap;

    for (int i = 0; i < v.size(); i++)
    {
        int min = INT_MAX;
        int indexMin = 0;
        for (int j = i; j < v.size(); j++)
        {
            if (min > v[j])
            {
                min = v[j];
                indexMin = j;
            }
        }
        swap(v, i, indexMin);
    }
}

int main()
{
    vector<int> v;
    int size = 0;
    cin >> size;

    while (size--)
    {
        int input = 0;
        cin >> input;
        v.push_back(input);
    }

    for (auto data : v)
    {
        cout << data << " ";
    }
    cout << endl;
    selectionSort(v);

    for (auto data : v)
    {
        cout << data << " ";
    }
}