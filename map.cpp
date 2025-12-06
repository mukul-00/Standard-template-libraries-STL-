#include <bits/stdc++.h>
using namespace std;

// map stores keys in sorted order (ascending by default)
// keys are UNIQUE

int explainMap() {

    // map<key, value>
    map<int, int> m;

    // map with value as a pair
    // key -> (value1, value2)
    map<int, pair<int, int>> m1;

    // map with key as a pair
    // (key1, key2) -> value
    map<pair<int, int>, int> m2;

    // inserting elements
    m[1] = 2;            // at key = 1, value = 2
    m.emplace(3, 1);    // inserts {3, 1}

    m.insert({2, 4});   // inserts {2, 4}

    // map is automatically sorted by key
    // m = { {1,2}, {2,4}, {3,1} }

    // iterating through the map
    for (auto it : m) {
        cout << it.first << " " << it.second << endl;
        // it.first  -> key
        // it.second -> value
    }

    cout << m[1] << endl;  // prints value at key 1 → 2

    // if key does not exist
    cout << m[5] << endl;  // prints 0 and creates key 5 with value 0

    // find() returns an iterator to the key if found
    auto it = m.find(3);   // points to {3, 1}

    cout << (*it).second << endl; // prints value → 1

    // lower_bound(k) → first key >= k
    auto it1 = m.lower_bound(2);  // points to key 2

    // upper_bound(k) → first key > k
    auto it2 = m.upper_bound(2);  // points to key 3

    return 0;
}
