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

void BubbleSort(vector<int> &v)
{
    for (int i = 0; i <= v.size() ; i++)
    {
        // cout<< "step -> "<< i<< endl;
        for (int j = 0; j < v.size() - i ; j++)
        {
            // cout<<v[j]<<" ";

            if (v[j] > v[j+1])
            {
                swap(v, j, j+1);
            }
        }
        // cout<<endl;
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int data = 0;
        cin >> data;
        v.push_back(data);
    }

    for (auto data : v)
    {
        cout << data << " ";
    }
    cout<<endl;
    BubbleSort(v);

    for (auto data : v)
    {
        cout << data << " ";
    }
}