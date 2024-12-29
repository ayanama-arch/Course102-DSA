#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Hashing with map
    // Map stores values in ordered fashion
    // The time complexity:
    // logN, of all three best, worst and average
    int arr[7] = {1, 2, 1, 1, 3, 4, 2};

    map<int, int> mpp;

    // Pre compute
    for (int i = 0; i < 7; i++)
    {
        mpp[arr[i]]++;
    }

    // Iterating the map
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "Frequency of 1: " << mpp[1] << endl;
    cout << "Frequency of 2: " << mpp[2] << endl;
    cout << "Frequency of 3: " << mpp[3] << endl;
    cout << "Frequency of 4: " << mpp[4] << endl;
    cout << "Frequency of 5: " << mpp[5] << endl;
}