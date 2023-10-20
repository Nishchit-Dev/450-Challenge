#include <stdio.h>

#define MAX 1000

class Queue
{
private:
    int PopPointer;
    int size;
    int PushPointer;
    int queue[MAX];

public:
    Queue()
    {
        // initialize queue pointer;
        size = 0;
        PopPointer = 0;
        PushPointer = -1;
    }
    void Enqueue(int data)
    {
        PushPointer += 1;
        size = PushPointer - PopPointer;
        queue[PushPointer] = data;
    }

    void Dequeue()
    {
        if (PopPointer < PushPointer)
        {
            queue[PopPointer] = 0;
            PopPointer += 1;
            size = PushPointer - PopPointer;
        }else{
            PopPointer = 0;
            PushPointer = -1;
        }
    }
    void isEmpty()
    {
    }
    void Peek()
    {
    }
    void PrintQueue()
    {
        if (size > 0)
        {
            for (int i = PopPointer; i < PushPointer; i++)
            {
                printf("index: %d, Data: %d\n", i, queue[i]);
            }
        }
    }
};

int main()
{
    Queue q1;
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.Enqueue(4);
    q1.Enqueue(5);
    q1.Enqueue(6);
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.PrintQueue();
    return 0;
}