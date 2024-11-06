#include<bits/stdc++.h>
using namespace std;
//https://www.youtube.com/watch?v=RRVYpIET_RU
//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers/

// Function Declarations
void explainPair();
void explainVector();
void explainList();
void explainDeque();
void explainStack();
void explainQueue();
void explainPQ();
void explainSet();
void explainMultiSet();
void explainUSet();
void explainMap();
void explainMultiMap();
void explainUnorderedMap();
void explainExtra();

// Pairs
void explainPair() {
    // Pair of two integers
    pair<int, int> p = {1, 3};
    cout << "Pair p: " << p.first << " " << p.second << endl; // Output: 1 3

    // Nested pair (pair inside a pair)
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << "Nested Pair p2: " << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // Output: 1 3 4

    // Array of pairs
    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6} };
    cout << "Element at index 1 in array of pairs: " << arr[1].second << endl; // Output: 4
}

// Vectors
void explainVector() {
    // Creating an empty vector
    vector<int> v;

    // Adding elements using push_back and emplace_back
    v.push_back(1);  // {1}
    v.emplace_back(2); // {1, 2}

    // Vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2}); // Pushes pair {1, 2}
    vec.emplace_back(1, 2); // Emplaces pair {1, 2}

    // Vector with predefined size and values
    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v2(v1); // Copying v1 into v2

    // Iterators
    vector<int>::iterator it = v1.begin(); // Points to the first element
    it++;
    cout << "Second element using iterator: " << *(it) << endl; // Output: 100

    // Displaying vector using iterators
    for (auto it = v1.begin(); it != v1.end(); it++) {
        cout << *(it) << " "; // Output: 100 100 100 100 100
    }
    cout << endl;

    // Using range-based for loop
    for (auto value : v1) {
        cout << value << " "; // Output: 100 100 100 100 100
    }
    cout << endl;

    // Erasing elements
    v.erase(v.begin() + 1); // Removes element at index 1
    v.erase(v.begin() + 2, v.begin() + 4); // Removes elements from index 2 to 3

    // Inserting elements
    vector<int> v3(2, 100); // {100, 100}
    v3.insert(v3.begin(), 300); // {300, 100, 100}
    v3.insert(v3.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    // Printing the size
    cout << "Size of v3: " << v3.size() << endl; // Output: 5

    // Clearing the vector
    v3.clear(); // Empties the vector

    // Checking if empty
    cout << "Is v3 empty?: " << v3.empty() << endl; // Output: 1 (true)
}

// Lists
void explainList() {
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(1); // {1, 5, 2, 4}

    // Displaying the list
    for (auto value : ls) {
        cout << value << " "; // Output: 1 5 2 4
    }
    cout << endl;
}

// Deque
void explainDeque() {
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    // Removing elements from front and back
    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    // Displaying front and back elements
    cout << "Front: " << dq.front() << " Back: " << dq.back() << endl; // Output: 4 1
}

// Stack
void explainStack() {
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.emplace(5); // {5, 3, 2, 1}

    cout << "Top element: " << st.top() << endl; // Output: 5
    st.pop(); // {3, 2, 1}
    cout << "After pop, top element: " << st.top() << endl; // Output: 3

    cout << "Stack size: " << st.size() << endl; // Output: 3
    cout << "Is stack empty?: " << st.empty() << endl; // Output: 0 (false)
}

// Queue
void explainQueue() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    cout << "Front element: " << q.front() << " Back element: " << q.back() << endl; // Output: 1 4
    q.pop(); // {2, 4}
    cout << "After pop, front element: " << q.front() << endl; // Output: 2
}

// Priority Queue
void explainPQ() {
    // Max-heap
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}
    cout << "Max-heap top: " << pq.top() << endl; // Output: 10
    pq.pop(); // {8, 5, 2}

    // Min-heap
    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(5); // {5}
    pq_min.push(2); // {2, 5}
    pq_min.push(8); // {2, 5, 8}
    pq_min.emplace(1); // {1, 2, 5, 8}
    cout << "Min-heap top: " << pq_min.top() << endl; // Output: 1
}

// Set
void explainSet() {
    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    st.insert(1); // No effect, still {1, 2, 3, 4}

    cout << "Set contains: ";
    for (auto it : st) {
        cout << it << " "; // Output: 1 2 3 4
    }
    cout << endl;

    // Erasing an element
    st.erase(2); // {1, 3, 4}
    cout << "After erasing 2: ";
    for (auto it : st) {
        cout << it << " "; // Output: 1 3 4
    }
    cout << endl;
}

// Maps
void explainMap() {
    map<int, int> mpp;
    mpp[1] = 2; // {1, 2}
    mpp[3] = 1; // {1, 2}, {3, 1}
    mpp.insert({2, 4}); // {1, 2}, {2, 4}, {3, 1}

    // Iterating over map
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl; // Output: 1 -> 2, 2 -> 4, 3 -> 1
    }

    // Finding an element
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << "Found key 3 with value: " << it->second << endl; // Output: 1
    }
}

// Complete main function to test examples
int main() {
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMap();
    return 0;
}
