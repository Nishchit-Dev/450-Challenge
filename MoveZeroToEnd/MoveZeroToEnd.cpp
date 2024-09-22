#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void MoveZeroToEnd(vector<int> &v)
{
    int zeroPointer = 0;
    int nonZeroPointer = 1;

    while (v[zeroPointer] != 0 && zeroPointer < v.size() - 1)
    {
        zeroPointer++;
        nonZeroPointer = zeroPointer;
    }
    cout << zeroPointer;
    int count = 0;
    while (nonZeroPointer < v.size() && zeroPointer < v.size() && count < v.size())
    {
        if (v[zeroPointer] == 0 && (v[nonZeroPointer] < 0 || v[nonZeroPointer] > 0) ||
             (v[zeroPointer] < 0 || v[zeroPointer] > 0) && v[nonZeroPointer] == 0)
        {
            swap(v[zeroPointer++], v[nonZeroPointer++]);
        }
        else if (v[nonZeroPointer] == 0)
        {
            nonZeroPointer++;
        }
        else
        {
            count++;
        }
    }

    for(auto data:v){
        cout<<data<<" ";
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

    MoveZeroToEnd(v);

    return 0;
}