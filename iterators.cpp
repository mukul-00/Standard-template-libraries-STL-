#include <bits/stdc++.h>
#include <vector>
using namespace std;

void explainiterator() {

    // -------------------------------
    // Basic vector and iterators
    // -------------------------------
    vector<int> vec = {10, 20, 30, 40, 50};

    // Normal iterator pointing to the first element
    vector<int>::iterator it = vec.begin();
    it++;  
    cout << *it << endl;     // prints 20

    // Move forward by 2 elements → now points to 40
    it = it + 2;
    cout << *it << endl;     // prints 40

    // end() → one past the last element (can't dereference)
    vector<int>::iterator itEnd = vec.end();

    // Reverse iterators
    vector<int>::reverse_iterator rit = vec.rbegin(); // points to 50
    vector<int>::reverse_iterator ritEnd = vec.rend(); // one before first


    // -------------------------------
    // Accessing elements
    // -------------------------------
    cout << vec[0] << " " << vec.at(0) << endl;  // both give 10
    cout << vec.back() << endl;                  // prints last element (50)


    // -------------------------------
    // Looping using iterators
    // -------------------------------

    // Using explicit iterator type
    cout << "Using explicit iterator:" << endl;
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Using auto
    cout << "Using auto iterator:" << endl;
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Range-based for loop
    cout << "Using range-based loop:" << endl;
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;
    // For each element in the vector vec, copy it into the variable val, and run the loop.


    // -------------------------------
    // erase()
    // -------------------------------
    // vec = {10, 20, 30, 40, 50}

    vec.erase(vec.begin() + 1);  
    // Now vec = {10, 30, 40, 50} (erased 20)

    vec.erase(vec.begin() + 2, vec.begin() + 4);  
    // Removes elements at indexes [2,4)
    // Now vec = {10, 30}


    // -------------------------------
    // insert()
    // -------------------------------
    vector<int> a(2, 100);        // a = {100, 100}
    a.insert(a.begin(), 300);     // a = {300, 100, 100}
    a.insert(a.begin() + 1, 2, 10); 
    // inserts "10" two times at index 1
    // a = {300, 10, 10, 100, 100}


    // -------------------------------
    // Other utilities
    // -------------------------------
    cout << vec.size() << endl;  // size of vec

    vec.pop_back();              // remove last element

    vector<int> x = {10, 20};
    vector<int> y = {30, 40};
    x.swap(y);                   // x = {30,40}, y = {10,20}

    vec.clear();                 // removes all elements

    cout << vec.empty() << endl; // returns 1 (true)
}

int main() {
    explainiterator();
    return 0; 
}
