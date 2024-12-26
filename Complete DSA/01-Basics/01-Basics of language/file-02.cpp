// ------------------------------------------------------
// C++ Notes: Data Types Explained with Code and Comments
// ------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    // --------------------------------------------------
    // 1. Primitive Data Types
    // --------------------------------------------------

    // **char**: Used to store a single character (1 byte)
    char letter = 'A';
    cout << "Character (char): " << letter << ", Size: " << sizeof(char) << " byte" << endl;

    // **int**: Used to store integers (4 bytes)
    int number = 100;
    cout << "Integer (int): " << number << ", Size: " << sizeof(int) << " bytes" << endl;

    // **long**: Used to store larger integers (typically 8 bytes)
    long bigNumber = 100000L;
    cout << "Long Integer (long): " << bigNumber << ", Size: " << sizeof(long) << " bytes" << endl;

    // **float**: Used to store decimal numbers with single precision (4 bytes)
    float decimalNumber = 3.14f;
    cout << "Float: " << decimalNumber << ", Size: " << sizeof(float) << " bytes" << endl;

    // **double**: Used to store decimal numbers with double precision (8 bytes)
    double largeDecimal = 3.14159;
    cout << "Double: " << largeDecimal << ", Size: " << sizeof(double) << " bytes" << endl;

    // --------------------------------------------------
    // 2. Derived Data Types
    // --------------------------------------------------

    // **Array**: A collection of elements of the same type
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << "Array (first element): " << numbers[0] << endl;

    // **Pointer**: Stores the memory address of another variable
    int *pointer = &number;
    cout << "Pointer (address of 'number'): " << pointer << endl;

    // **Reference**: Acts as an alias for another variable
    int &reference = number;
    cout << "Reference (value of 'number'): " << reference << endl;

    // --------------------------------------------------
    // 3. User-Defined Data Types
    // --------------------------------------------------

    // **Structure**: Groups variables of different types
    struct Point
    {
        int x;
        int y;
    };
    Point p = {10, 20};
    cout << "Struct Point: (" << p.x << ", " << p.y << ")" << endl;

    // **Class**: Blueprint for creating objects
    class Student
    {
    public:
        string name;
        int age;
    };
    Student s = {"John", 20};
    cout << "Class Student: Name = " << s.name << ", Age = " << s.age << endl;

    // **Enumeration**: Defines a set of named integer constants
    enum Color
    {
        RED,
        GREEN,
        BLUE
    };
    Color favoriteColor = GREEN;
    cout << "Enum Color: " << favoriteColor << endl;

    // --------------------------------------------------
    // 4. Type Modifiers
    // --------------------------------------------------

    // **signed**: Allows both positive and negative values
    signed int signedNumber = -10;
    cout << "Signed Integer: " << signedNumber << endl;

    // **unsigned**: Allows only non-negative values
    unsigned int unsignedNumber = 10;
    cout << "Unsigned Integer: " << unsignedNumber << endl;

    // **short**: Reduces the storage size of integers
    short int shortNumber = 50;
    cout << "Short Integer: " << shortNumber << ", Size: " << sizeof(shortNumber) << " bytes" << endl;

    // --------------------------------------------------
    // 5. Type Casting
    // --------------------------------------------------

    // Implicit Casting: Automatic conversion by the compiler
    double implicitCasting = number;
    cout << "Implicit Casting (int to double): " << implicitCasting << endl;

    // Explicit Casting: Manual conversion
    double pi = 3.14;
    int explicitCasting = (int)pi;
    cout << "Explicit Casting (double to int): " << explicitCasting << endl;

    // --------------------------------------------------
    // 6. Special Data Types
    // --------------------------------------------------

    // **bool**: Stores true or false
    bool isReady = true;
    cout << "Boolean: " << isReady << endl;

    // **void**: Used for functions with no return value
    // No direct usage in variables.

    // **wchar_t**: Stores wide characters (Unicode)
    wchar_t wideChar = L'A';
    wcout << L"Wide Character: " << wideChar << endl;

    return 0;
}
