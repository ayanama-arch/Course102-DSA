#include <iostream>
using namespace std;

void reverse_array(int arr[], int start, int end)
{
    if (start > end)
        return;
    swap(arr[start], arr[end - 1]);
    reverse_array(arr, start + 1, end - 1);
}

bool is_palindrome(string str, int i)
{
    if (str.length() / 2 <= i)
        return true;
    if (str[i] != str[str.length() - i - 1])
        return false;

    return is_palindrome(str, i + 1);
}
int main()
{
    // Reverse an array
    int arr[5] = {1, 2, 3, 4, 5};
    reverse_array(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Check if string is palindrome
    bool ans = is_palindrome("ana", 0);
    if (ans)
    {
        cout << "string is palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome" << endl;
    }
}