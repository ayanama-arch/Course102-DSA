#include <iostream>
using namespace std;
int printing_fibonacci(int n)
{
    if (n <= 1)
        return n;

    return printing_fibonacci(n - 1) + printing_fibonacci(n - 2);
}
int main()
{
    // Fibonacci nth number
    int ans = printing_fibonacci(7);
    cout << "ANS: " << ans << endl;
}