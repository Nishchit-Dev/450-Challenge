#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int findSecondLargest(vector<int> v)
{

    if (v.size() > 0)
    {
        int max = 0;
        int previousMax = 0;

        for (int i = 0; i < v.size(); i++)
        {
            
            if (max < v[i])
            {   
                previousMax = max;
                max = v[i];
            }else if(v[i] > previousMax && v[i] != max){
                previousMax = v[i];
            }

            cout<< "previosMax -> "<<previousMax<<endl;            
        }
        return previousMax;
    }
    return -1;
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

    int result = findSecondLargest(v);

    cout << result;
}