#include <stdio.h>
#include <iostream>

using namespace std;

class sort
{
public:
    void sort012(int a[], int n)
    {
        int zero = 0;
        int one = 0;
        int two = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                zero++;
            }
            else if (a[i] == 1)
            {
                one++;
            }
            else if (a[i] == 2)
            {
                two++;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (zero > 0)
            {
                a[j] = 0;
                zero--;
            }
            else if (one > 0)
            {
                a[j] = 1;
                one--;
            }
            else if (two > 0)
            {
                a[j] = 2;
                two--;
            }
            printf("%d ", a[j]);
        }
    }
} srt;

int main()
{
    int arr[] = {0, 2, 1, 0, 2, 1, 0};
    srt.sort012(arr, 7);

    return 0;
}
