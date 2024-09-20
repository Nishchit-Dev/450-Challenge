#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> v)
{
    bool flag = true;
    int breakCount = 0;

    int kTimes = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            breakCount++;
        }
    }
    if (v[0] < v[v.size()-1])
    {
        breakCount++;
    }

    if (breakCount > 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int number = 0;
        cin >> number;
        v.push_back(number);
    }
    for (auto data : v)
    {
        cout << data << " ";
    }
    cout << endl;

    bool i = isSorted(v);
    cout << "\n result: " << i;
}
