#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX 1000

class stacks {
private:
    int top;
    int stack[MAX];

public:
    stacks()
    {
        top = -1;
    }

    void isEmpty()
    {
        if (top ==  -1)
        {
            cout << "Empty Stack \n";
        }
        else
        {
            cout << top;
        }
    }
    int Top()
    {
        cout<< top << "\n";
        return top;
    }
    void push(int value)
    {
        top++;
        stack[top] = value;
        cout<< "Stack["<<top<<"]: "<< value <<"\n";
    }
    void pop()
    {   
        cout<< "\nPopped !! \n";
        cout<< "Stack["<<top<<"]: "<< stack[top] <<"\n";
        stack[top] == NULL;
        top--;
    }
};

int
main()
{
    stacks s ;
    s.isEmpty();
    s.push(1);
    s.Top();
    s.push(12);
    s.push(123);
    s.Top();

    s.push(1234);
    s.pop();
    s.Top();

    return 0;
}