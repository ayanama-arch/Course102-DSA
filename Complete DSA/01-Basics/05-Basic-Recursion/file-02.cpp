#include <iostream>
using namespace std;

int sum_of_natural_numbers(int n)
{
    if (n == 0)
        return 0;

    return n + sum_of_natural_numbers(n - 1);
}

int factorial_of_number(int n)
{
    if (n == 0)
        return 1;
    return n * factorial_of_number(n - 1);
}
int main()
{
    // Prinint sum of first N natural Numbers
    int sum = sum_of_natural_numbers(10);
    cout << "Sum: " << sum << endl;

    // factorial of number
    int factorial = factorial_of_number(5);
    cout << "Factorial: " << factorial << endl;
}