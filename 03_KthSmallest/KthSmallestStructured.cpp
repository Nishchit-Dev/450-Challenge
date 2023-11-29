// Class for Kth Smallest Element with necessary functions
class KthSmallest_
{
public:
    // Function to swap two elements
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    // Function to perform partitioning for QuickSort
    int partition(int x[], int l, int r)
    {
        // Initialize pivot
        int pivot = x[r];
        int i = l - 1;

        // Iterate through the array from l to r-1
        for (int j = l; j < r; j = j + 1)
        {
            // If the current element is less than or equal to the pivot
            if (x[j] <= pivot)
            {
                // Increment i and swap x[i] and x[j]
                i = i + 1;
                swap(&x[i], &x[j]);
            }
        }

        // Swap the pivot element with the element at position (i+1)
        swap(&x[i + 1], &x[r]);

        // Return the final position of the pivot element
        return i + 1;
    }

    // Function to find the kth smallest element using QuickSelect
    int kthElement(int x[], int l, int r, int k)
    {
        // If only one element in the array
        if (l == r)
        {
            return x[l];
        }

        // Finding pivot index and position
        int pos = partition(x, l, r);
        int i = pos - l + 1;

        // When pivot index is equal to k
        if (i == k)
        {
            return x[pos];
        }
        else if (i > k)
        {
            // If pivot index is greater than k, search in the left subarray
            return kthElement(x, l, pos - 1, k);
        }
        else
        {
            // If pivot index is less than k, search in the right subarray
            return kthElement(x, pos + 1, r, k - i);
        }
    }
} kth;

// Class for the Solution
class Solution
{
public:
    // Function to find the kth smallest element in the given range
    int kthSmallest(int arr[], int l, int r, int k)
    {
        // Call the kthElement function from the KthSmallest_ class
        return kth.kthElement(arr, 0, r, k);
    }
};
