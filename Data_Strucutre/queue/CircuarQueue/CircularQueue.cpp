#include <iostream>

using namespace std;
#define MAX 5
#define Space " \n "
class CircularQueue
{
private:
    int arr[MAX];
    int PushPointer = -1;
    int PopPointer = -1;

public:
    void Enqueue(int data)
    {
        if (isFull())
        {
            cout << "Queue is Full " << data << " could not be Enqueued \n";
            return;
        }
        else
        {

            if (isEmpty())
            {
                cout << "empty\n";
                PushPointer = PopPointer = 0;
                arr[PushPointer] = data;
            }
            else
            {
                PushPointer = (PushPointer + 1) % MAX;

                arr[PushPointer] = data;
            }

            cout << PushPointer << " <- Index , Data -> " << data << " \n";
        }
    }

    void Dequeue()
    {
        int temp = 0;
        if (isEmpty())
        {
            cout << "Empty \n";
            return;
        }
        else if (PopPointer == PushPointer)
        {
            temp = arr[PopPointer];
            arr[PopPointer] = 0;
            PopPointer = PushPointer = -1;
        }
        else
        {
            temp = arr[PopPointer];
            arr[PopPointer] = 0;
            PopPointer = (PopPointer + 1) % MAX;
        }
        cout << "Push : " << PushPointer << "\n";
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
        cout << "Popped ->" << PopPointer << " Pushed -> " << PushPointer << "\n";
        if (!isEmpty())
        {
            cout << "pop : " << PopPointer << " & push" << PushPointer;
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

    cq1.Enqueue(10);
    cq1.Enqueue(20);
    cq1.Enqueue(30);
    cq1.Enqueue(40);
    cq1.Enqueue(50);
    cq1.Dequeue();
    cq1.Enqueue(60);
    cq1.Enqueue(900);

    cq1.Print();
}