#include<bits/stdc++.h>
using namespace std;
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


//Pairs
void explainPair() {

    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second <<endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second <<endl;

    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6}};
                              //0     //1     //2
    cout << arr[1].second << endl;

}

//Vectors https://takeuforward.org/c/vector-in-c-stl/
/* Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them.
Vector elements can be easily accessed and traversed using iterators. A vector stores elements in contiguous memory locations.*/
void explainVector() {

    vector<int> v;

    v.push_back(1);  
    // {} --> {1}
    v.emplace_back(2); 
    // -> {1, 2} faster than pushback 

    vector<pair<int, int>> vec;

    v.push_back({1, 2});
    v.emplace_back(1, 2);
    //in emplace ,assumes to be a pair so {} not req not so in push_back

    vector<int> v(5, 100);// more elements can be added later on
    //{100, 100, 100, 100, 100}

    vector<int> v(5);
    /*{0, 0, 0, 0, 0}
    0 or any garbage value depends on compiler*/

    vector<int> v1(5, 20);
    //{20, 20, 20, 20, 20}
    vector<int> v2(v1);
    //copies v1 container in v2

    /*we can increase size cause of its
    dynamic nature after predefining size*/

    vector<int>::iterator it = v.begin();
    //v.begin() points the 1st element's memory
    it++;  //shifts to next element's memory
    cout << *(it) << " ";
    //*( ) takes the element inside the memory

    it = it + 2;
    //shifts to next to next element's memory
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    //{10, 20, 30, __} in here end() refers element after 30
    vector<int>::iterator it = v.rend();
    //{__, 10, 20, 30} reverse and points before 10
    vector<int>::iterator it = v.rbegin();
    //{10, 20, 30} reverse and points 30

    cout << v[0] << " " << v.at(0);

    cout << v.back() << " " //prints 30

    //Using for loop

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    //auto = vector<int>::iterator
    //auto is a shortcut for defining datatype

    for(auto it : v) {
        cout << it << " ";
    }

    //{10, 20, 11, 12}
    v.erase(v.begin()+1); //{10, 11, 12}    

    //{10, 20, 11, 12, 13}
    v.erase(v.begin() + 2, v.begin() + 4);
    //{10, 20, 13} (start, end)

    //Insert function

    vector<int> v(2, 100);  //{100, 100}
    v.insert(v.begin(), 300);   //{300, 100, 100}
    v.insert(v.begin() + 1, 2, 10)
    //{300, 10, 10, 100, 100}

    vector<int> copy(2, 50); //{50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());
    //{50, 50, 300, 10, 10, 100, 100}

    //{10, 20}
    cout << v.size(); //2
    v.pop_back(); //pops last element {10}

    //v1 -> {10, 20}    
    //v2 -> {30, 40}    
    v1.swap(v2); //swaps v1 and v2

    v.clear(); //erases the entire vector

    cout << v.empty();
    //if it has elements prints False(0)
    //if it has nothing prints True(1)

}

//Lists
void explainList() {
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2, 4}

    ls.push_front(5);   //{5, 2, 4}

    ls.emplace_front(); 
    //rest functns are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}

//Deque
/* A deque (double-ended queue) is a sequence container that allows fast insertion 
and deletion of elements from both the front and back. It is part of the C++ Standard Library and 
provides a dynamic array-like structure.*/
void explainDeque() {
    deque<int> dq;// cretes empty dq
    dq.push_back(1);
    dq.emplace_back(2);// more efficient for complex data types
    //{1, 2}
    dq.push_front(4);//4,1,2
    dq.emplace_front(3);
    //{3, 4, 1, 2}

    dq.pop_back();  //{3, 4, 1} removes last element 
    dq.pop_front(); //{4, 1}

    dq.back();
    //Returns a reference to the last element in the deque (which is now 1).
    //front(): Returns a reference to the first element in the deque (which is now 4).
    dq.front();

    //rest functns are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}

//Stack
void explainStack() {

    //LIFO = Last In First Out
    stack<int> st;
    st.push(1);     //{1}
    st.push(2);     //{2, 1}
    st.push(3);     //{3, 2, 1}
    st.push(3);     //{3, 3, 2, 1}
    st.emplace(5);  //{5, 3, 3, 2, 1}

    cout << st.top();   //prints 5  
    // In stack indexing is not allowed i.e., st[0]
    st.pop(); //st looks like {3, 3, 2, 1} removes top element from stack

    cout << st.top();   //prints 3

    cout << st.size();  //4
    cout << st.empty();   //prints 0 i.e., False

    stack<int>st1, st2;
    st1.swap(st2);// This swaps the contents of two stacks (st1 and st2). After this operation, both stacks will contain elements from each other.
}

//Queues
void explainQueue() {
    //FIFO = First In First Out
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1, 2}
    q.emplace(4);   //{1, 2, 4}

    q.back() += 5; //{1, 2, 9}

    cout << q.back(); //prints 9

    //Q is {1, 2, 9}
    cout << q.front(); //prints 1

    q.pop(); //{2, 9}

    cout << q.front();  //prints 2

    //size swap empty same as stack
}

//Priority Queue
/*A priority_queue is a container that stores elements in a way that allows for efficient retrieval of the highest (or lowest) priority element.
    By default, it implements a maximum heap, meaning the largest element is always at the top. You can also create a minimum heap by specifying a different comparison function.*/

void explainPQ() {
    //Maximum Heap
    priority_queue<int>pq;

    pq.push(5); //{5}
    pq.push(2); //{5, 2}
    pq.push(8); //{8, 5, 2}
    pq.emplace(10)  //{10, 8, 5, 2}
    //The largest guy stays at top or stays first

    cout << pq.top(); //prints 10

    pq.pop();   //{8, 5, 2}

    cout << pq.top(); //prints 8

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2, 5}
    pq.push(8); //{2, 5, 8}
    pq.emplace(10); //{2, 5, 8, 10}

    cout << pq.top();   //prints 2

}

//Sets
void explainSet() {
    //Stores in Sorted order and stores unique
    set<int>st;
    st.insert(1);   //{1}
    st.emplace(2);   //{1, 2}
    st.insert(1);   //{1, 2}
    st.insert(4);   //{1, 2, 4}
    st.insert(3);   //{1, 2, 3, 4}

    //Functionality of insert in vector
    //can be used also, that only increases
    //efficiency

    //begin(), end(), rbegin(), rend(), size(),
    //empty() and swap() are same as those above

    //{1, 2, 3, 4, 5}
    auto it = st.find(3);
    //returns iterator that points 3

    auto it = st.find(6);
    //returns iterator that is after the last element

    st.erase(5);    //erases 5

    int cnt = st.count(1);
    //if 1 is in set then shows 1(true) else 0(false)

    auto it = st.find(3);
    st.erase(it);   //it takes constant time

    //{1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2) //{1, 4, 5} (first, last)

    //lower_bound() and upper_bound() funtn works 
    //the same way as in vector does.

    //This is the syntax
    //{1, 2, 3, 4, 5}
    auto it = st.lower_bound(2);
    //returns iterator pointing at 2 but if 2 was
    //absent then it would have returned iterator
    //pointing 3
    auto.it = st.upper_bound(3);
    //returns iterator pointing next greater element
    //of 3 i.e., 4 and if 3 absent then also same
}

//MultiSets
void explainMultiSet() {
    //Everything is same as set
    //only stores duplicate too

    multiset<int>ms;
    ms.insert(1);   //{1}
    ms.insert(1);   //{1, 1}
    ms.insert(1);   //{1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    //only a single 1 is erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

    //rest all function same as set
}

//Unordered Set https://takeuforward.org/c/unordered-set-in-c-stl/
void explainUSet() {
    unordered_set<int> st;
    //lower and upper_bound functn
    //does not works, rest all functns are same
    //as above, it does not stores in any
    //particular order it has a better complexity
    //than set in most cases, except some wheb collision happens
}

//Maps
void explainMap() {
    //stores everything in respect of key and values
    //key can be any datatype int, pair, double etc
    //stores unique keys in SORTED ORDER
    map<int, int> mpp;
      //key  value
    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    mpp[1] = 2; //{1, 2}
    mpp.emplace({3, 1}); //{3, 1}
    mpp.insert({2, 4}); //{2, 4}

    mpp[{2, 3}] = 10; //{{2, 3}, 10}

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
    /* Prints like this
            1 2
            2 4
            3 1
    */
    cout << mpp[1]; //2
    cout << mpp[5]; //null

    auto it = mpp.find(3); //points {3, 1}
    cout << *(it).second;  //*(it).second points 1

    auto it = mpp.find(5);
    //points mpp.end() i.e., after the map

    //This is the syntax
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    //erase, swap, size, empty, are same as above
}

//Multi Maps
void explainMultiMap() {
    //everything same as map, only it can store multiple
    //keys, only mpp[key] cannto be used here
}

//Unordered Maps
void explainUnorderedMap() {
    //same as set and unordered_Set diff
    //it will not store duplicate and in sorted way
}

//Comparators - Used for MY Way Sorting
bool comp(pair<int, int>p1, pair<int, int>p2) {
    if(p1.second < p2.second) {
        return true;
    } else if (p1.second == p2.second) {
        if(p1.first > p2.first) return true;
    }
    return false;
}

void explainExtra() {

    sort(a, a+n);
    sort(v.begin(), v.end());

    //{1, 3, 5, 2   }
    // ^  ^  ^  ^  ^
    // a  1  2  3  4
    sort(a+2, a+4);

    sort(a, a+n, greater<int>); 
    //Sorts in descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    //sort it according to 2nd element
    //if 2nd element is same, then sort it
    //accoring to 1st element but in descending

    sort(a, a+n, comp);
    //comp -> self written comparator
    //nothing but boolean function
    //  {{4, 1}, {2, 1}, {1, 2}}

    int num = 7;
    int cnt = __builtin_popcount();
    // 7 in binary is 111 so cnt will be 3

    long long num = 165784848447878;
    int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end());

    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
    //132, 213, 231, 312, 321

    int maxi = *max_element(a, a+n);

}





int main(){

    return 0;
}
