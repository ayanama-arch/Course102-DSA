#include <iostream>
using namespace std;
void printNumbers(int n)
{
    if (n == 0)
        return;
    printNumbers(n - 1);
    cout << n << " ";
}

void printName(int n)
{
    if (n == 0)
        return;
    cout << "John Doe ";
    printName(n - 1);
}
int main()
{
    // Printing numbers from 1 to N with Recurions
    printNumbers(10);

    // Printing names n times
    printName(5);
}