#include <iostream>
#include <map>
using namespace std;

int main()
{
    // mpping of all the ASCII characters
    int arr[5] = {1, 2, 1, 3, 1};

    map<int, int> hash;
    for (int i = 0; i < 5; i++)
    {
        hash[arr[i]]++;
    }

    int maxFreq = 0;
    int maxElement = 0;
    for (auto it : hash)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }

    cout << maxElement << " : " << maxFreq << endl;
}