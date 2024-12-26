#include <iostream>
using namespace std;
int main()
{
    // Pattern-03
    char ch = 'A';
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << char(ch + j) << " ";
        }
        cout << endl;
    }
}