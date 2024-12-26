#include <iostream>
using namespace std;

int main()
{
    // A simple for loop to print numbers from 1 to 5
    for (int i = 1; i <= 5; i++)
    {
        cout << "Number: " << i << endl; // Print the current value of i
    }

    // A simple while loop to print numbers from 1 to 5
    int i = 1;
    while (i <= 5)
    {
        cout << "Number: " << i << endl; // Print the current value of i
        i++;                             // Increment i to avoid an infinite loop
    }
    return 0;
}
