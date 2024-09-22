#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int LinearSearch(vector<int> v, int k)
{
    int size = v.size();
    int low = 0 ; 
    int high = size - 1;


    while (low <= high){
        int mid = (low + high)/2;   
        if (v[mid] == k)
        {
            return mid;
        }
        cout<<mid<<" \n";
        if (v[mid] >= k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1; 
        }
    }

    return -1;
}

int main()
{
    vector<int> v;
    int size;
    cin >> size;
    int k = 0;
    cin >> k;
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        cin >> temp;
        v.push_back(temp);
    }
    LinearSearch(v, k);
    return 0;
}