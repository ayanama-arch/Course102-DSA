#include <iostream>
using namespace std;
int main()
{
    // count digit in number which divides the number completely
    int num = 12;

    // Method-01
    int temp = num;
    int cnt = 0;
    while (temp)
    {
        int digit = temp % 10;
        if (num / digit == 0)
        {

            cnt++;
        }
        temp = temp / 10;
    }

    cout << "Numbers: " << cnt << endl;
}