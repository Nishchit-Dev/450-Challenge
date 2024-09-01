#include <stdio.h>
#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

void countElements(int arr[])
{
}

int main()
{

    int size = 0;
    cin >> size;
    cout << size;
    unordered_map<int,int> hash;

    vector<int> v;

    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        cin >> temp;
        v.push_back(temp);
    }
    cout<<endl;

    for (auto data : v)
    {
        hash[data]++;
    }
    cout<<endl;

    for (auto data : v)
    {
        cout<<data<< " -> " <<hash[data]<<endl;
    }
}