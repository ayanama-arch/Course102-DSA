#include <iostream>
using namespace std;

// Function to demonstrate Pass by Value
void passByValue(int a)
{
    a = a + 5;                                                    // Modify the copy of 'a'
    cout << "Inside function (pass by value), a = " << a << endl; // This change won't affect the original argument
}

// Function to demonstrate Pass by Reference
void passByReference(int &a)
{
    a = a + 5;                                                        // Modify the original value of 'a'
    cout << "Inside function (pass by reference), a = " << a << endl; // This change will affect the original argument
}

int main()
{
    int x = 10;
    int y = 20;

    cout << "Before function calls:" << endl;
    cout << "x = " << x << endl; // x = 10
    cout << "y = " << y << endl; // y = 20

    // Calling function to demonstrate pass by value
    passByValue(x);
    cout << "After passByValue function call, x = " << x << endl; // x remains 10 because it's passed by value

    // Calling function to demonstrate pass by reference
    passByReference(y);
    cout << "After passByReference function call, y = " << y << endl; // y becomes 25 because it's passed by reference

    return 0;
}
