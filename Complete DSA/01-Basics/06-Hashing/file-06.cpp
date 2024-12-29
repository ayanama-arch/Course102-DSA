#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    // Create an unordered_map to store key-value pairs
    // Keys: strings (names), Values: integers (ages)
    unordered_map<string, int> hashMap;

    // Insert key-value pairs into the unordered_map
    hashMap["Alice"] = 25;   // Key: "Alice", Value: 25
    hashMap["Bob"] = 30;     // Key: "Bob", Value: 30
    hashMap["Charlie"] = 35; // Key: "Charlie", Value: 35

    // Access and print values using keys
    // Lookup is O(1) on average for unordered_map
    cout << "Alice's age: " << hashMap["Alice"] << endl;

    // Check if a key exists using find()
    // find() returns an iterator to the key if found, else returns hashMap.end()
    if (hashMap.find("Bob") != hashMap.end())
    {
        cout << "Bob is found in the map with age: " << hashMap["Bob"] << endl;
    }
    else
    {
        cout << "Bob is not in the map." << endl;
    }

    // Iterate over the unordered_map to print all key-value pairs
    for (const auto &pair : hashMap)
    {
        // pair.first is the key, pair.second is the value
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Erase a key-value pair by key
    hashMap.erase("Alice");

    // Check if "Alice" exists after erasure
    if (hashMap.find("Alice") == hashMap.end())
    {
        cout << "Alice has been removed from the map." << endl;
    }

    return 0;
}
