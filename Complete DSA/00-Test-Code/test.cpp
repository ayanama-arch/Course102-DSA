#include <iostream>
using namespace std;
int powerOfTen(int pow)
{
    int ans = 1;
    for (int i = 0; i < pow; i++)
    {
        ans *= 10;
    }

    return ans;
}
int main()
{
    int num;
    cout << "Enter number to reverse: " << " ";
    cin >> num;
    int ans = 0;
    int i = 0;
    while (num)
    {
        int lastDigit = num % 10;
        ans = ans * 10 + lastDigit;
        num = num / 10;
        i++;
    }
 
    cout << endl;

    cout << "Answer is: " << ans;
}