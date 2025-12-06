#include <bits/stdc++.h>
using namespace std;

// Custom comparator function for sorting pairs
// Rule:
// 1️⃣ Sort by second value in ascending order
// 2️⃣ If second values are same, sort by first value in descending order
bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    
    // second value is same → compare first (descending)
    if (p1.first > p2.first) return true;
    return false;
}

int main(){
    // -------------------------------
    // Vector sorting example
    // -------------------------------
    vector<int> a = {1, 5, 3, 2, 6};

    // Sort vector in ascending order
    sort(a.begin(), a.end());

    cout << "Sorted vector (ascending): ";
    for (auto it1 : a) {
        cout << it1 << " ";
    }
    cout << "\n\n";

    // -------------------------------
    // Pair sorting using custom comparator
    // -------------------------------
    pair<int, int> v[] = {{1, 2}, {2, 1}, {4, 1}};
    int n = sizeof(v) / sizeof(v[0]);

    // Sort pairs using comp function
    sort(v, v + n, comp);

    cout << "Sorted pairs (by second asc, first desc if tie):\n";
    for (auto it : v) {
        cout << "First = " << it.first 
             << ", Second = " << it.second << endl;
    }

    return 0;
}
