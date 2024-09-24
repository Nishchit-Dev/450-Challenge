#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void optimalFindMaxConsecutive(vector<int> v)
{
    int count = 0;
    int maxCount = 0;
    for (auto data : v)
    {
        if (data == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        maxCount = std::max(max, maxCount);
    }
}

void findMaxConsecutive(vector<int> &v)
{
    int maxCon = 0;
    int maxConNum = 0;
    int i = 0, j = 0;
    int size = v.size();
    int count = 0;
    while (i < size && j < size)
    {
        if (v[i] == v[j])
        {
            count++;
            j++;
        }
        else
        {
            i++;
            j = i;
            count = 0;
        }
        if (maxCon < count)
        {
            maxCon = count;
            maxConNum = v[i];
        }
    }
    cout << "maxCon -> " << maxCon << '\n';
    cout << "maxConNum -> " << maxConNum;
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

    findMaxConsecutive(v);

    return 0;
}