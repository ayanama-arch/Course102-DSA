#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot) // If current element is smaller than or equal to pivot
        {
            i++;                  // Increment the index of smaller element
            swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
        }
    }

    // Place pivot in the correct position
    swap(arr[i + 1], arr[high]);
    return (i + 1); // Return the partition index
}

// Quick Sort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); // Partition index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    // Quick sort
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
