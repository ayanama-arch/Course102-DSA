#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool is_swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                is_swapped = true;
            }
        }
        if (!is_swapped)
        {
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    // bubble_sort
    int arr1[5] = {5, 2, 12, 1, 3};
    bubble_sort(arr1, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }

    // Bubble Sort puts largest element in the first round and after that it follows same trend.
    // Space Complexity -> O(1)
    // Time Complexity -> O(n^2)
    // Stable Algorithm
}