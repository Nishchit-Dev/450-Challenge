#include <stdio.h>
#include <iostream>

using namespace std;

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
        if (PushPointer < MAX)
        {
            PushPointer += 1;
            size = PushPointer - PopPointer;
            queue[PushPointer] = data;
        }
        else
        {
            printf("queue is full");
        }
    }

    void Dequeue()
    {
        if (PopPointer < PushPointer)
        {
            printf("Dequeued: %d\n", queue[PopPointer]);
            queue[PopPointer] = 0;
            PopPointer += 1;
            size = PushPointer - PopPointer;
        }
        else
        {
            PopPointer = 0;
            PushPointer = -1;
            size = 0;
            printf("Queue is empty\n");
        }
    }
    bool isEmpty()
    {
        if (size > 0)
        {
            printf("Queue size is 0");
            return true;
        }
        return false;
    }
    void Peek()
    {
        if (PopPointer > -1 && isEmpty())
        {
            printf("Peek: %d\n", queue[PopPointer]);
        }
    }
    void PrintQueue()
    {
        if (isEmpty())
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
    q1.Peek();
    q1.Enqueue(6);
    q1.Dequeue();
    q1.Peek();
    q1.Dequeue();
    q1.Peek();
    q1.Dequeue();
    q1.Dequeue();

    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.Peek();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();

    q1.PrintQueue();
    return 0;
}