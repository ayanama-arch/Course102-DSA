#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 9. queue
    queue<int> q;
    q.push(1);
    q.push(2);
    cout << q.front() << " "; // Front of the queue
    q.pop();
    cout << q.front() << endl;

    // 10. stack
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    cout << stk.top() << "\n"; // Top of the stack
    stk.pop();

    // 11. deque
    deque<int> dq = {1, 2};
    dq.push_back(3);
    dq.push_front(0);
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;

    // 12. priority_queue
    priority_queue<int> pq; // Max-heap by default
    pq.push(3);
    pq.push(1);
    pq.push(2);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // 13. list
    list<int> lst = {1, 2, 3}; // Doubly linked list
    lst.push_front(0);
    lst.push_back(4);
    for (int x : lst)
    {
        cout << x << " ";
    }
    cout << endl;

    // 14. next_permutation
    vector<int> perm = {1, 2, 3};
    do
    {
        for (int x : perm)
        {
            cout << x;
        }
        cout << " ";
    } while (next_permutation(perm.begin(), perm.end()));
    cout << endl;

    // 15. __builtin_popcount()
    int num = 5;                             // Binary: 101
    cout << __builtin_popcount(num) << endl; // Number of 1's in binary representation

    // 16. sort()
    vector<int> to_sort = {3, 1, 2};
    sort(to_sort.begin(), to_sort.end()); // Sorts in ascending order
    for (int x : to_sort)
    {
        cout << x << " ";
    }
    cout << endl;

    // 17. min_element() and max_element()
    cout << *min_element(to_sort.begin(), to_sort.end()) << endl; // Smallest element
    cout << *max_element(to_sort.begin(), to_sort.end()) << endl; // Largest element

    return 0;
}
