#include <bits/stdc++.h>
#include <set>
using namespace std;

// everything is same as set
// expect it stores duplicate element

int explainMultiSet(){
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.insert(1); // {1, 1, 1, 1}

    ms.erase(1); // erase all 1's in the set

    ms.erase(ms.find(1)); //all single single 1 erased

    ms.erase(ms.erase(1)+2);

    // rest all function are same

    return 0;

}