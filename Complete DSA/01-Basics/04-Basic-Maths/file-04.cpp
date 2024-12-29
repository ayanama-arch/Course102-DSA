#include <iostream>
using namespace std;
int main()
{
    // Palindrome of number
    int num = 121;
    int temp = num;
    int ans = 0;
    while (ans)
    {
        int lastDigit = num % 10;
        ans = ans * 10 + lastDigit;
        num = num / 10;
    }

    if (temp == num)
        cout << "True";
    else
        cout << "False";
}