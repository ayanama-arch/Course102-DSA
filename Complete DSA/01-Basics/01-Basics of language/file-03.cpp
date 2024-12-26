// ------------------------------------------------------
// C++ Notes: if-else Statements Explained with Code
// ------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    // --------------------------------------------------
    // 1. Basic if Statement
    // --------------------------------------------------
    // The 'if' statement checks a condition. If true, the block of code inside 'if' executes.
    int number = 10;
    if (number > 5)
    { // Condition: number is greater than 5
        cout << "The number is greater than 5." << endl;
    }

    // --------------------------------------------------
    // 2. if-else Statement
    // --------------------------------------------------
    // The 'else' block executes if the condition in 'if' is false.
    if (number < 5)
    {
        cout << "The number is less than 5." << endl;
    }
    else
    {
        cout << "The number is NOT less than 5." << endl;
    }

    // --------------------------------------------------
    // 3. if-else if Ladder
    // --------------------------------------------------
    // Multiple conditions can be checked using 'else if'.
    if (number == 0)
    {
        cout << "The number is zero." << endl;
    }
    else if (number > 0)
    {
        cout << "The number is positive." << endl;
    }
    else
    {
        cout << "The number is negative." << endl;
    }

    // --------------------------------------------------
    // 4. Nested if-else
    // --------------------------------------------------
    // You can place one 'if-else' block inside another.
    int age = 20;
    if (age >= 18)
    { // Outer if
        if (age >= 21)
        { // Inner if
            cout << "You are eligible to drink alcohol (age >= 21)." << endl;
        }
        else
        {
            cout << "You are an adult but not eligible to drink alcohol." << endl;
        }
    }
    else
    {
        cout << "You are not an adult." << endl;
    }

    // --------------------------------------------------
    // 5. Ternary Operator (Short Form of if-else)
    // --------------------------------------------------
    // Syntax: condition ? value_if_true : value_if_false;
    int score = 85;
    string result = (score >= 50) ? "Pass" : "Fail";
    cout << "Exam Result: " << result << endl;

    // --------------------------------------------------
    // 6. Common Pitfalls in if-else
    // --------------------------------------------------

    // (a) Missing curly braces can lead to logical errors.
    if (score >= 50)
        cout << "You passed!" << endl; // This executes if condition is true.
    cout << "Study hard!" << endl;     // This always executes (not part of 'if').

    // Correct way:
    if (score >= 50)
    {
        cout << "You passed!" << endl;
        cout << "Study hard!" << endl; // Part of 'if' block.
    }

    // (b) Using assignment (=) instead of equality (==)
    int x = 5;
    if (x = 10)
    { // This assigns 10 to x and evaluates to true.
        cout << "This condition is always true due to assignment!" << endl;
    }

    // Correct way:
    if (x == 10)
    {
        cout << "This condition checks equality correctly." << endl;
    }

    // --------------------------------------------------
    // 7. Advanced Tip: Logical Operators in Conditions
    // --------------------------------------------------
    int a = 10, b = 20;
    if (a > 5 && b > 15)
    { // '&&' checks if both conditions are true.
        cout << "Both a and b are large numbers." << endl;
    }

    if (a > 15 || b > 15)
    { // '||' checks if at least one condition is true.
        cout << "At least one of a or b is a large number." << endl;
    }

    return 0;
}
