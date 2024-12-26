#include <iostream>
using namespace std;

/*
    Time Complexity:
    Time complexity is the measurement of the amount of time an algorithm takes to run as a function of the input size (n).
    It's important for understanding how an algorithm will scale as the input grows.

    The most common time complexities:
    - O(1): Constant time complexity. The execution time is fixed and doesn't depend on the size of the input.
    - O(n): Linear time complexity. The execution time grows linearly with the input size.
    - O(n^2): Quadratic time complexity. The execution time grows quadratically with the input size.
    - O(log n): Logarithmic time complexity. The execution time grows logarithmically with the input size.
    - O(n log n): Log-linear time complexity. It is a combination of linear and logarithmic growth.

    Example of O(1) (Constant time complexity):
    This is a constant-time algorithm where the time taken does not depend on the size of input.
*/

void constantTimeExample(int n)
{
    cout << "Constant time complexity function!" << endl; // This line executes only once, no matter the value of n
}

/*
    Example of O(n) (Linear time complexity):
    Here, the number of operations increases linearly with the input size.
*/

void linearTimeExample(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Operation #" << i + 1 << endl; // This loop will execute 'n' times
    }
}

/*
    Space Complexity:
    Space complexity refers to the amount of memory an algorithm needs to run as a function of the input size.
    Like time complexity, space complexity is often represented using Big O notation.

    The most common space complexities:
    - O(1): Constant space complexity. The memory required does not grow with the size of the input.
    - O(n): Linear space complexity. The memory grows linearly with the input size.

    Example of O(1) (Constant space complexity):
    This algorithm uses a fixed amount of space, regardless of the size of the input.

    Example of O(n) (Linear space complexity):
    This algorithm uses memory proportional to the size of the input.
*/

void constantSpaceExample(int n)
{
    int constant = 5; // This variable takes constant space, no matter the value of n
    cout << "This is a constant space example." << endl;
}

void linearSpaceExample(int n)
{
    int *arr = new int[n]; // The array takes 'n' units of memory, where n is the input size
    for (int i = 0; i < n; i++)
    {
        arr[i] = i; // Storing 'n' integers, thus requiring 'O(n)' space
    }
    delete[] arr; // Don't forget to free memory after use
    cout << "This is a linear space example." << endl;
}

int main()
{
    // Testing Time and Space Complexity Examples:
    int n = 5;

    // Testing O(1) Time Complexity
    cout << "Testing constant time complexity (O(1)):" << endl;
    constantTimeExample(n);

    // Testing O(n) Time Complexity
    cout << "\nTesting linear time complexity (O(n)):" << endl;
    linearTimeExample(n);

    // Testing O(1) Space Complexity
    cout << "\nTesting constant space complexity (O(1)):" << endl;
    constantSpaceExample(n);

    // Testing O(n) Space Complexity
    cout << "\nTesting linear space complexity (O(n)):" << endl;
    linearSpaceExample(n);

    return 0;
}
