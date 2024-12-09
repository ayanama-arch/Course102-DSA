#include <iostream>
using namespace std;
void printNto1(int num)
{
    if (num == 0)
        return;
    cout << num << " ";
    printNto1(num - 1);
}

void print1toN(int num)
{
    if (num == 0)
        return;

    print1toN(num - 1);
    cout << num << " ";
}
int main()
{
    // Recursion when a function keeps calling iteslef until a base condition is met.
    // Function keep calling itself to solve problem

    // Printing N to 1
    printNto1(5);
    cout << endl;
    // printing 1 to N
    print1toN(10);
}