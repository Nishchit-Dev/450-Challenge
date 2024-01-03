#include <stdio.h>
#include <iostream>
using namespace std;

class sortNumber
{
private:
    int *_arr;
    int size;

public:
    sortNumber(int arr[], int n)
    {
        _arr = new int[n];
        size = n;
        for (int i = 0; i < n; i++)
        {
            _arr[i] = arr[i]; // Copy elements from arr to _arr
        }
    }
    void printArrow(int i, char *ch)
    {
        cout << "\n";

        for (int k = 0; k < size; k++)
        {
            if (k == i)
            {
                cout << ch << " ";
            }
            else
            {
                cout << _arr[k] << ' ';
            }
        }
    }
    void reArrange()
    {
        int j = 0;
        for (int i = 0; i < size; i++)
        {
            if (_arr[i] < 0)
            {
                if (i != j)
                {
                    swap(i, j);
                }
                j++;
            }
        }
    }
    void swap(int i, int j)
    {
        int temp = _arr[i];
        _arr[i] = _arr[j];
        _arr[j] = temp;
    }

    void printArray()
    {
        cout << '\n';
        for (int i = 0; i < size; i++)
        {
            cout << _arr[i] << ' ';
        }
    }
    ~sortNumber()
    {
        delete[] _arr; // Free the allocated memory in the destructor
    }
};

int main()
{
    int temp[] = {-1, -2, -3, 4, 5, 6, -7, 8, 9,10};
    int size =10;
    sortNumber arrange(temp, size);
    cout << "Before";
    arrange.printArray();
    arrange.reArrange();
    cout << "\nAfter";
    arrange.printArray();
    return 0;
}