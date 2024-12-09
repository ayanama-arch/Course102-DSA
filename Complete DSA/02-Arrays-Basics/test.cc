#include <iostream>
using namespace std;

void sortArray012(int *arr, int size)
{
    int start = 0;
    int mid = 0;
    int end = size - 1;

    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[start++], arr[mid++]);
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[end--]);
        }
    }
}
int main()
{

    int arr3[5] = {1, 0, 1, 2, 0};
    sortArray012(arr3, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }
}