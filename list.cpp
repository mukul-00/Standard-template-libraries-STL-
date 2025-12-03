#include <bits/stdc++.h>
using namespace std;

// Function to explain how std::list works
void explainList() {

    // Creating an empty doubly linked list of integers
    // Initially: {}
    list<int> ls;

    // Adds an element at the END of the list
    // Now: {2}
    ls.push_back(2);

    // Same as push_back but slightly faster (constructs in-place)
    // Now: {2, 5}
    ls.emplace_back(5);

    // Adds an element at the FRONT of the list
    // Now: {6, 2, 5}
    ls.push_front(6);

    // Same as push_front (constructs in-place)
    // Now: {8, 6, 2, 5}
    ls.emplace_front(8);

    // Note:
    // std::list supports all basic operations like:
    // begin(), end(), rbegin(), rend()
    // clear(), insert(), size(), swap(), erase()
    // But unlike vector, list does NOT allow direct access like ls[0]

    // Let's print the list to confirm the order
    cout << "Elements in list: ";
    for (int x : ls) {
        cout << x << " ";
    }
    cout << endl;
    // For each element in the vector ls, copy it into the variable x, and run the loop.
}

int main() {
    explainList();
    return 0;
}
