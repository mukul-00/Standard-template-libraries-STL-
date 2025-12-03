#include <bits/stdc++.h>
using namespace std;

void explainDeque() {

    deque<int> dq; // empty deque {}

    dq.push_back(2);      // {2}
    dq.emplace_back(5);   // {2, 5}

    dq.push_front(6);     // {6, 2, 5}
    dq.emplace_front(8);  // {8, 6, 2, 5}

    // print deque
    cout << "Elements in deque: ";
    for (int x : dq) cout << x << " ";
    cout << endl;
}
// same as vector function
// begin(), end(), rbegin(), rend()
// clear(), insert(), size(), swap(), erase()

int main() {
    explainDeque();
    return 0;
}
