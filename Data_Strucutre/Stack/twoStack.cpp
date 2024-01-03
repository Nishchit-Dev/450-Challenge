// Link to Problem
// Link - https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1

class twoStacks
{
    public:
    int top1;
    int low1;
    int size;
    int top2;
    int low2;
    
    int* arr;

    twoStacks(int n=100)
    {   
        arr = new int[n];
        low2 = n/2-1;
        top2 = n/2-1;
        low1 = -1;
        top1= -1;
        size = n/2;
    }
      

    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(top1 < low2){
            top1++;
            arr[top1] = x;
        }
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       if(top2 < size*2 ){
            top2++;
            arr[top2] = x;
        }
    }
    
    //Function to remove an element from top1 of the stack1.
    int pop1()
    {
        if(top1>low1){
            int temp = arr[top1];
            arr[top1]=0;
            top1--;
            return temp;
        }else{
            return -1;
        }
    }
    
    //Function to remove an element from top2 of the stack2.
    int pop2()
    {
        if(top2>low2){
            int temp = arr[top2];
            arr[top2]=0;
            top2--;
            return temp;
        }else{
            return -1;
        }
    }
};