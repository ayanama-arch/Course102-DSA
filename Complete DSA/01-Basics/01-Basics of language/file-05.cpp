#include <iostream>
using namespace std;

int main()
{
    // ARRAY
    // Declare an array of integers with 5 elements
    int arr[5] = {1, 2, 3, 4, 5}; // Array elements are stored in contiguous memory locations

    // Access and print the elements of the array using index
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // Access each element using arr[i] where i is the index
    }
    cout << endl;

    // Example of modifying an array element
    arr[2] = 10; // Modify the third element (index 2)
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // Print the modified array
    }
    cout << endl;

    // STRING
    // Declare and initialize a string
    string str = "Hello, World!"; // A string in C++ is an object of the string class

    // Print the string
    cout << "String: " << str << endl;

    // Accessing characters in the string using index
    cout << "First character: " << str[0] << endl; // Access the first character 'H'

    // Modify a character in the string
    str[0] = 'h';                               // Change the first character to lowercase 'h'
    cout << "Modified string: " << str << endl; // Print the modified string

    // String length
    cout << "Length of string: " << str.length() << endl; // Get the length of the string

    return 0;
}
