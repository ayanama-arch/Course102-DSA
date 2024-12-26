// ------------------------------------------------------
// C++ Notes: switch Statement Explained with Code
// ------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    // --------------------------------------------------
    // 1. Basic Syntax of switch Statement
    // --------------------------------------------------
    // The 'switch' statement evaluates an expression and matches its value with one of the 'case' labels.
    // If a match is found, the corresponding block executes.

    int choice = 2; // Example input

    switch (choice)
    {
    case 1: // Executes if choice == 1
        cout << "You selected option 1." << endl;
        break; // Exits the switch block
    case 2:    // Executes if choice == 2
        cout << "You selected option 2." << endl;
        break;
    case 3: // Executes if choice == 3
        cout << "You selected option 3." << endl;
        break;
    default: // Executes if no case matches
        cout << "Invalid option selected." << endl;
    }

    // --------------------------------------------------
    // 2. Importance of break Statement
    // --------------------------------------------------
    // Without 'break', execution will "fall through" to the next case.
    cout << "\nDemonstrating fall-through:\n";

    switch (choice)
    {
    case 1:
        cout << "Case 1 executed." << endl;
    case 2:
        cout << "Case 2 executed (no break in previous case)." << endl;
    case 3:
        cout << "Case 3 executed (no break in previous case)." << endl;
    default:
        cout << "Default case executed (no break in any case)." << endl;
    }
    // Note: Always use 'break' unless fall-through is intended.

    // --------------------------------------------------
    // 3. switch with char
    // --------------------------------------------------
    // You can use 'switch' with char types.
    char grade = 'B';

    switch (grade)
    {
    case 'A':
        cout << "\nExcellent!" << endl;
        break;
    case 'B':
        cout << "Good job!" << endl;
        break;
    case 'C':
        cout << "Well done!" << endl;
        break;
    case 'D':
    case 'F': // Grouping cases
        cout << "You need to work harder." << endl;
        break;
    default:
        cout << "Invalid grade." << endl;
    }

    // --------------------------------------------------
    // 4. switch with enum
    // --------------------------------------------------
    // Enums are often used with 'switch' for better readability.
    enum Color
    {
        Red,
        Green,
        Blue
    };
    Color selectedColor = Green;

    switch (selectedColor)
    {
    case Red:
        cout << "\nYou selected Red." << endl;
        break;
    case Green:
        cout << "You selected Green." << endl;
        break;
    case Blue:
        cout << "You selected Blue." << endl;
        break;
    default:
        cout << "Invalid color." << endl;
    }

    // --------------------------------------------------
    // 5. Limitations of switch Statement
    // --------------------------------------------------
    // (a) The 'switch' statement only works with:
    //     - Integral types (int, char, enum, etc.)
    //     - Cannot use floating-point (float, double) or strings.
    // Example of invalid switch usage:
    // float value = 3.14;
    // switch (value) { // Error: floating-point type not allowed
    //     ...
    // }

    // (b) The cases must have constant expressions:
    // int x = 5;
    // switch (x) {
    //     case x: // Error: case value must be constant
    //         ...
    // }

    return 0;
}
