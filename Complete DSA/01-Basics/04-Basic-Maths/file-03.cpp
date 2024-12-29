#include <iostream>
using namespace std;
int main()
{
    // Reverse a number
    int num = 12345;
    int ans = 0;
    while (num)
    {
        int digit = num % 10;

        ans = ans * 10 + digit;

        num = num / 10;
    }
    cout << "Ans: " << ans << endl;
}