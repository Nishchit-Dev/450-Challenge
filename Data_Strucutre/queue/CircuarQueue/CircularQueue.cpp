#include <iostream>

using namespace std;
#define MAX 5

class CircularQueue
{
private:
    int arr[MAX];
    int PushPointer = -1;
    int PopPointer =-1;

public:
    void Enqueue(int data)
    {
        // if (isFull())
        // {
        //     return;
        // }

        if (isEmpty())
        {
            PushPointer = PopPointer = 0;
        }
        else
        {
            PushPointer = (PushPointer + 1) % MAX;
        }

        arr[PushPointer] = data;

        cout << data << '\n';
    }

    void Dequeue()
    {
        int temp = 0;
        if (isEmpty())
        {
            cout<<"Empty \n";
            return;
        }
        else if (PopPointer == PushPointer)
        {
            cout<<"pop == push";
            temp = arr[PopPointer];
            arr[PopPointer] = 0;
            PopPointer = PushPointer = -1;
        }
        else
        {
            cout<<"pop != push";
            temp = arr[PopPointer];
            arr[PopPointer] = 0;
            PopPointer = (PopPointer + 1) % MAX;
        }
        cout<<"Data : "<<temp<<"\n";
    }

    bool isEmpty()
    {
        if (PushPointer == -1 && PopPointer == -1)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if ((PushPointer + 1) % MAX == PopPointer)
        {
            return true;
        }
        return false;
    }

    void Print()
    {
        if (!isEmpty())
        {

            for (int i = PopPointer; i <= PushPointer; i++)
            {
                cout << i << "->" << arr[i] << "\n";
            }
        }
    }
};

int main()
{
    CircularQueue cq1;

    cq1.Enqueue(1);
    cq1.Enqueue(2);
    cq1.Enqueue(3);
    cq1.Dequeue();
    cq1.Print();
}