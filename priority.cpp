#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;

// in priority queue (jo sabse bada voh phele ata hai)

int explainPQ(){
    priority_queue<int> pq; // {}

    pq.push(1); // {1}
    pq.push(8); // {8, 1}
    pq.push(2); // {8, 2, 1}
    pq.emplace(10); // {10, 8, 2, 1}

    cout << pq.top() << endl; // prints 10

    pq.pop(); //  removes 10 -> {8, 2, 1}

    cout << pq.top() << endl; // prints 8

    // size , swap, empty function same as others

// this Priority queue is max heap


    //Minimun Heap
    priority_queue<int, vector<int>, greater<int>> m;

    m.push(1); // {1}
    m.push(8); // {1, 8}
    m.push(2); // {1, 2, 8}
    m.emplace(10); // {1, 2, 8, 10}

    cout << m.top() << endl; // prints 1

    return 0;
}