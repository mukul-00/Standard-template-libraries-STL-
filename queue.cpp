#include <bits/stdc++.h>
#include <queue>
using namespace std;

// last mein hi add krta hai 

int main (){
    queue<int> q; // {}
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9}

    cout << q.back() << endl; // prints 9
    
    // q = {1, 2, 9}
    cout << q.front() << endl; // prints 1

    q.pop(); // {2, 9}

    cout << q.front() << endl; // {2}

    // size , swap, empty same as stack
}