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

int rotateArray(vector<int> &v, int k = 4)
{
    int lastNumber = 0;

    for (int i = 0; i <= v.size(); i += k)
    {
        swap(v[i], v[i + k - 1]);
    }
    for (int i = 1; i < v.size() - 1; i += k)
    {
        swap(v[i], v[i + k]);
    }
    cout << " \n";
    for (auto data : v)
    {
        cout << data << " ";
    }
    return 0;
}

void Reverse(vector<int> &v, int start , int end)
{
    int leftPointer = start;
    int rightPointer = end;
    cout << "\n"
         << leftPointer << " " << rightPointer << " \n";
    while (rightPointer > leftPointer)
    {
        swap(v[leftPointer++], v[rightPointer--]);
    }
    for (auto data : v)
    {
        cout << data << " ";
    }
}

void OptimalRotation(vector<int> &v, int k)
{
    Reverse(v, 0, v.size() - k - 1);
    Reverse(v,v.size() - k , v.size() - 1);
    Reverse(v, 0, v.size() - 1);
}

int rotateByOne(vector<int> &v)
{
    int prev = v[v.size() - 1];
    int prevIndex = 0;

    for (int i = v.size(); i > 0; i--)
    {
        swap(v[i], v[i - 1]);
    }
    v[0] = prev;
    cout << " \n";
    for (auto data : v)
    {
        cout << data << " ";
    }
    return 0;
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
    OptimalRotation(v,7);

    return 0;
}