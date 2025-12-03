#include <bits/stdc++.h>
#include <iostream>
#include <ostream>
#include <utility>
using namespace std;

void explainpair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair < int, pair<int, int> > q = {1, {2, 3}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair <int, int> arr[] = {{1, 2},{3, 4},{5, 6}};
    cout << arr[1].second << endl; // prints 4
}

int main(){
    explainpair();
    return 0; 
}