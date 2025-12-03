#include <bits/stdc++.h>
#include <vector>
using namespace std;

void explainvector(){

    // Create an empty vector of integers: v = {}
    vector<int> v;

    // Add element at the end → v becomes {1}
    v.push_back(1);

    // Add element at the end (faster than push_back) → v = {1, 2}
    v.emplace_back(2);


    // -----------------------------
    // Vector of pairs
    // -----------------------------

    vector<pair<int, int>> vp;

    // push_back requires braces for pair
    vp.push_back({1, 2});

    // emplace_back constructs the pair directly (no braces needed)
    vp.emplace_back(1, 2);


    // -----------------------------
    // Vector with initial size + value
    // -----------------------------

    // Creates a vector of size 5 where EVERY element is 100:
    // vec = {100, 100, 100, 100, 100}
    vector<int> vec(5, 100);


    // Creates a vector of size 5 where all values are default-initialized (0):
    // q = {0, 0, 0, 0, 0}
    vector<int> q(5);


    // -----------------------------
    // Copying vectors
    // -----------------------------

    // v1 = {20, 20, 20, 20, 20}
    vector<int> v1(5, 20);

    // v2 is a copy of v1
    vector<int> v2(v1);
}

int main(){
    explainvector();
    return 0; 
}
