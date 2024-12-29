#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. unordered_set
    unordered_set<int> uset = {1, 2, 3, 4}; // Fast insertion and lookup, no order guaranteed.
    uset.insert(5);
    // Example output
    for (int x : uset)
    { // Iteration order is arbitrary.
        cout << x << " ";
    }
    cout << endl;

    // 2. Vector
    vector<int> vec = {1, 2, 3, 4}; // Dynamic array, allows random access.
    vec.push_back(5);
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << endl;

    // 3. Set
    set<int> st = {4, 1, 3, 2}; // Ordered, unique elements.
    st.insert(5);
    for (int x : st)
    { // Elements are in sorted order.
        cout << x << " ";
    }
    cout << endl;

    // 4. unordered_multiset
    unordered_multiset<int> umset = {1, 1, 2, 2}; // Allows duplicate elements, no order guaranteed.
    umset.insert(3);
    for (int x : umset)
    {
        cout << x << " ";
    }
    cout << endl;

    // 5. multiset
    multiset<int> mst = {3, 1, 2, 1}; // Ordered, allows duplicate elements.
    mst.insert(2);
    for (int x : mst)
    {
        cout << x << " ";
    }
    cout << endl;

    // 6. unordered_map
    unordered_map<int, string> umap = {{1, "one"}, {2, "two"}}; // Fast key-value storage, no order guaranteed.
    umap[3] = "three";

    // Without structured bindings (pre-C++17)
    for (auto it = umap.begin(); it != umap.end(); ++it)
    {
        cout << it->first << ": " << it->second << "\n";
    }

    // 7. map
    map<int, string> mp = {{1, "one"}, {2, "two"}}; // Ordered key-value storage.
    mp[3] = "three";

    // Without structured bindings (pre-C++17)
    cout << "Using iterators:\n";
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        cout << it->first << ": " << it->second << "\n";
    }

    // 8. unordered_multimap
    unordered_multimap<int, string> umm = {{1, "one"}, {1, "uno"}}; // Allows duplicate keys, no order.
    umm.insert({2, "two"});

    // Without structured bindings (pre-C++17)
    cout << "Using iterators:\n";
    for (auto it = umm.begin(); it != umm.end(); ++it)
    {
        cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
