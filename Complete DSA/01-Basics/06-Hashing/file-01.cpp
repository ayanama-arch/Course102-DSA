#include <iostream>
using namespace std;

int main()
{
    // Hashing basic concept
    // Number hashing
    int arr[5] = {1, 3, 1, 2, 2};
    int hash[6] = {0};

    for (int i = 0; i < 5; i++)
    {
        hash[arr[i]] += 1;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << hash[i] << " ";
    }

    cout << endl;

    cout << "frequency of 1 " << hash[1] << endl;
    cout << "frequency of 2 " << hash[2] << endl;
    cout << "frequency of 3 " << hash[3] << endl;
    cout << "frequency of 4 " << hash[4] << endl;

    // Maximium size of an array inside main can be 10^6 of type int
    // Maximium size of an array inside main can be 10^7 of type boolean

    // If you're declaring globally max size can be 10^7 of type int
    // If you're declaring globally max size can be 10^8 of type boolean
}