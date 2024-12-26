// Basic Input/Output in C++

// Including Libraries
// Use #include<iostream> for input and output operations.
// Use #include<bits/stdc++.h> to include most standard libraries at once (not recommended for large projects).

// Using Namespace
// Add "using namespace std;" to avoid prefixing std:: to every standard function.

// Skeleton of a C++ Program
#include <iostream>  // Library inclusion
using namespace std; // Namespace usage

int main()
{
    // Main function - Entry point of the program.
    return 0; // End of program
}

// Output with cout
// Use std::cout or cout (if "using namespace std;" is declared) to print output.
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, World!" << endl; // endl adds a newline
    cout << "Hello, World!\n";       // \n adds a newline
    return 0;
}

// Input with cin
// Use cin to take user input.
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y; // Takes two inputs separated by space or Enter key
    cout << "Value of x: " << x << " and y: " << y << endl;
    return 0;
}

// \n vs std::endl
// \n is faster as it only adds a newline, while std::endl also flushes the output buffer.

// Notes on #include<bits/stdc++.h>
// - Includes many standard libraries in one line.
// - Use for competitive programming, but avoid in large projects to prevent unnecessary inclusion.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;                              // Input
    cout << "x: " << x << ", y: " << y << endl; // Output
    return 0;
}
