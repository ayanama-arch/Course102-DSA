#include <iostream>
using namespace std;
int main()
{
    // Pattern-03
    int n1 = 5;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n1 - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    int n2 = 5;
    for (int i = 0; i < n2; i++)
    {

        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n2; i++)
    {

        for (int k = 0; k < n2 - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}