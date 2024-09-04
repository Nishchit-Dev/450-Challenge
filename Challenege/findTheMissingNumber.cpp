#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void findMissing(vector<int> &v, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;

    if (v[mid] != v[mid - 1] && v[mid + 1] != v[mid])
    {
        cout << v[mid] << endl;
        return;
    }
    findMissing(v, low, mid);
    findMissing(v, mid + 1, high);
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
    findMissing(v, 0, v.size());
}