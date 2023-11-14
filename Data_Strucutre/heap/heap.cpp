#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void delete(vector<int> &v, int num)
{
    // first we find the number get the index of that number and we replace that number with last element and we apply heapify
    int index = 0;
    int size = v.size;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == num)
        {
            index = i;
            break;
        }
    }

    // swap the element
}
void insert(vector<int> &v, int data)
{

    // 1st checkpoint
    if (v.size() == 0)
    {
        v.push_back(data);
    }
    else
    {
        v.push_back(data);
        // now we do heapify
    }
}
int main()
{
}