#include <bits/stdc++.h>
#include <stack>
using namespace std;

// stack mean last one is at top , mean it comes first

void explainStack(){
    stack<int> st; // {}
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2 ,1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top() << endl; // prints 5

    st.pop(); // st look {3, 3, 2, 1}
    cout << st.top() << endl; // 3

    cout << st.size() << endl; // size is 4

    cout << st.empty() << endl; // false

    stack<int> st1, st2;
    st1.swap(st2);
}

int main(){
    explainStack();
    return 0; 
}