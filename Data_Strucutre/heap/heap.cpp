#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class heap
{
};
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(vector<int> &v, int NodeIndex)
{

    int size = v.size();
    int MaximunChildIndex = NodeIndex;
    int LeftChild = 2 * NodeIndex + 1;
    int RightChild = 2 * NodeIndex + 2;
    if (LeftChild < size && v[MaximunChildIndex] < v[LeftChild])
    {
        MaximunChildIndex = LeftChild;
    }

    if (RightChild < size && v[MaximunChildIndex] < v[RightChild])
    {
        MaximunChildIndex = RightChild;
    }

    if (MaximunChildIndex != NodeIndex)
    {
        swap(&v[MaximunChildIndex], &v[NodeIndex]);
        heapify(v, MaximunChildIndex);
    }
}

void deleteHeap(vector<int> &v, int num)
{
    // first we find the number get the index of that number and we replace that number with last element and we apply heapify
    int index = 0;
    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        if (v[i] == num)
        {
            index = i;
            break;
        }
    }

    // swap the element
    swap(&v[index], &v[size - 1]);
    v.pop_back();
    // then heapify

    for (int j = (size / 2) - 1; j >= 0; j--)
    {
        // heapify
        heapify(v, j);
    }
}
void insert(vector<int> &v, int data)
{
    int size = v.size();
    // 1st checkpoint
    if (size == 0)
    {
        v.push_back(data);
    }
    else
    {
        v.push_back(data);
        // now we do heapify
        for (int i = size / 2; i >= 0; i--)
        {
            heapify(v, i);
        }
    }
}

void Display(vector<int> &v)
{
    for (auto ele : v)
    {
        cout << ele << " ";
    }
}

int main()
{
    vector<int> v;
    insert(v, 1);
    insert(v, 4);
    insert(v, 2);
    insert(v, 6);
    insert(v, 3);
    insert(v, 9);
    insert(v, 10);

    Display(v);
}