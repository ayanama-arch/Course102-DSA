#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];

            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    // insertion sort
    int arr[5] = {3, 13, 1, 5, 2};
    insertion_sort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    /*
     * Complexity:
     *  - Time Complexity:
     *    - Best Case: O(n)
     *      When the array is already sorted, insertion sort only needs to pass through the array once.
     *    - Average Case: O(n^2)
     *      On average, insertion sort requires n(n-1)/4 comparisons and shifts, resulting in quadratic time complexity.
     *    - Worst Case: O(n^2)
     *      When the array is sorted in reverse order, insertion sort performs the maximum number of comparisons and shifts.
     *
     *  - Space Complexity:
     *    - Auxiliary Space: O(1)
     *      Insertion sort is an in-place sorting algorithm, requiring a constant amount of additional space.
     *
     * Stability:
     *  - Yes, insertion sort is stable.
     *    It preserves the relative order of records with equal keys (i.e., values).
     */
}