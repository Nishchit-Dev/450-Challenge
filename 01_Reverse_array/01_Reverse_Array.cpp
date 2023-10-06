#include <stdio.h>

void swap(int *arr, int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void OddOrEven(int arr[], int size, int *limit)
{
    if (size % 2 == 0)
    {
        *limit = size / 2;
    }
    else
    {
        *limit = size / 2 - 1;
    }
}

int Reverse(int arr[],int size){
    int limit;

    OddOrEven(arr, size, &limit);

    printf("size: %d\n", size);

    for (int i = 0; i <= limit; i++)
    {
        int with = size - i - 1;
        swap(arr, i, with);
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6,7};
    int arr2[] = {1, 2, 3, 4, 5, 6,7,12,234,235,24,35,32,34,4,52434,345,65,75545,467,866,766};

    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int sizeArr2 = sizeof(arr2) / sizeof(arr2[0]); // Calculate the size of the array

    int limit;

    Reverse(arr,size);
    Reverse(arr2,sizeArr2);

    return 0;
}
