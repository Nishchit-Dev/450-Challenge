#define MAX 5

class CircularQueue
{
private:
    int *arr;
    int PushPointer;
    int PopPointer;

public:
    void Enqueue(int data)
    {
        if(isFull())
        if(isEmpty()){
            PushPointer = PopPointer =  0;
        }else{
            PushPointer = (PushPointer+1)%MAX;
        }

        arr[PushPointer] = data ;
    }

    void Dequeue()
    {
        int temp = 0 ;
        if(isFull()){
            return;
        }else if(PopPointer == PushPointer){
            temp = arr[PopPointer];
            PopPointer = PushPointer = -1;
        }else{
            temp = arr[PopPointer];
            PopPointer = (PopPointer+1)%MAX;
        }

    }

    bool isEmpty()
    {
        if (PushPointer == -1 && PopPointer == -1)
        {
            return true;
        }
        return false;
    }

    bool isFull(){
        if((PushPointer + 1)%MAX == PopPointer ){
            return true;
        }
        return false;

    }

    void Print()
    {
        if (isEmpty())
        {

            for (int i = 0; i < MAX; i++)
            {
                cout << i << "->" << arr[i]
            }
        }
    }

}

int main()
{
    CircularQueue cq1;
}