#include <bits/stdc++.h>
using namespace std;

// set stores UNIQUE elements in SORTED (ascending) order

int explainSet() {
    set<int> st; // {}

    st.insert(1);         // {1}
    st.emplace(2);        // {1, 2}
    st.insert(2);         // duplicate ignored → {1, 2}
    st.insert(4);         // {1, 2, 4}
    st.insert(3);         // {1, 2, 3, 4}

    cout << "Set elements: ";
    for (int x : st) cout << x << " ";
    cout << endl;

    // find() → returns iterator to element or end()
    auto it = st.find(3);     // found
    auto missing = st.find(5); // not found

    // erase by value (O(log n))
    st.erase(4);              // removes 4 → {1, 2, 3}

    cout << "After erasing 4: ";
    for (int x : st) cout << x << " ";
    cout << endl;

    // count() returns 1 if present, 0 if absent
    int cnt = st.count(1);    // 1
    cout << "Count of 1 = " << cnt << endl;

    // erase by iterator
    auto it2 = st.find(3);
    st.erase(it2);            // removes 3 → {1, 2}

    cout << "After erasing 3: ";
    for (int x : st) cout << x << " ";
    cout << endl;

    // add more elements for range erase
    st.insert(3);
    st.insert(4);
    st.insert(5);             // {1, 2, 3, 4, 5}

    auto start = st.find(2);
    auto endIt = st.find(4);
    st.erase(start, endIt);   // removes [2,3] → {1, 4, 5}

    cout << "After range erase: ";
    for (int x : st) cout << x << " ";
    cout << endl;

    // lower_bound / upper_bound
    auto lb = st.lower_bound(2); // first >= 2
    auto ub = st.upper_bound(4); // first > 4

    if (lb != st.end())
        cout << "lower_bound(2): " << *lb << endl;
    else
        cout << "lower_bound(2) not found\n";

    if (ub != st.end())
        cout << "upper_bound(4): " << *ub << endl;
    else
        cout << "upper_bound(4) not found\n";

    return 0;
}
