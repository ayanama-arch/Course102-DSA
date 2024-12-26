#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int isSorted = false;
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " : ";
    }
}
int main()
{
    // Selection sort
    int arr1[5] = {4, 5, 31, 12, 4};
    selectionSort(arr1, 5);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " : ";
    }

    // Selection sort puts smallest element first
    // Use it when size of an array is small
    // It is unstable it means it doesn't maintain it's orignal order
    // Space Complexity -> O(1)
    // Time Complexity -> O(n^2)
}