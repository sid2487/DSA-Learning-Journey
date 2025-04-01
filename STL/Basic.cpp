#include <bits/stdc++.h> // this includes all the libbrary
using namespace std;

// STL: Standard Template Library
// it is basically compilation of containers, algorithum, iterators, functions in a minimised version so that you don't have to write lengthy lines of code again and again.

// Pairs :

    void explainPair()
{

    // pair<int, int> p = {1, 3}; // this will store 1 and 3 in p 

    // cout << p.first << " " << p.second; // this will access the first and second element that is stored in p.

    pair<int, pair<int, int>> p = {1, {3,4}};

    cout << p.first << " " << p.second.second << " " << p.second.first ;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;
}

// vectors: in the normal array it is impossible to increase the size once you initialize and that's why we have introduced vectors.
// It's like a container which is Dynamic in nature. 

void explainVectors(){

    vector<int> v;
    
    v.push_back(1);// {1}
    v.emplace_back(2); // {1,2} // dynamically inc. the size and insert the element from the back

    vector<pair<int, int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100); // it means v carries the 5 instances of 100 // {100,100,100,100,100}

    vector<int> v5(5); // a container of 5 instances with the value 0 or garbage inside it. 

    vector<int> v1(5,20); // {20,20,20,20,20}
    vector<int> v2(v1); // this will  pass the v1 inside the v2. //  

    // to access the element of v:
    // 1) v[1] = 10 or v[5] = 7;
    // 2) through iterator: iterator is just pointing to the memory where element is located.

    vector<int>::iterator it = v.begin(); // v.begin() points to the memory not to the element

    // in order to access anything inside the memory, we use '*'
    it++;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();

    // vector<int>::iterator it = v.rend();

    // vector<int>::iterator it = v.rbegin(); never used both.

    cout  << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for(vector<int>::iterator it=v.begin(); it != v.end(); it++ ){
        cout << *(it) << " ";
    }

    for(auto it=v.begin(); it != v.end(); it++){
        cout << *(it) << " ";                    
    }
    for(auto it:v){
        cout << it << " ";
    }

    // erasing
    // {10,20,12,23,35}

    v.erase(v.begin()+1); // it will erase 20 and the vector will be reshuffled {10,12,23,35}
// {10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4); // {10,20,35} it will erase the 2nd and the 3rd element 
    // notice here that start is included but end is not

    // Insert function

    vector<int>v(2,100); // {100, 100}
    v.insert(v.begin(), 300);  // {300,100,100}
    v.insert(v.begin()+1, 2,10); // {300,10,10,100,100}

    // v.copy

    //{10,20}
    cout << v.size(); // 2

    //{10,20}
    v.pop_back(); // {10}

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1 -> {30,40} v2 -> {10,20}

    v.clear(); // erases the entire vector

    
}

// List
void explainList()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); //  {2,4}

    ls.push_front(5);   // {5,2,4}
    ls.emplace_front(); // {2,4}

    // rest functions sames as vector
    // begin, end, rbegin, rend, clear, insert, size,
}

// Stack (LIFO)

void explainStack() {
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top(); // print 5 "** st(2) is invaild **"

    st.pop(); // st looks like {3,3,2,1}

    cout << st.top(); // 3
    
    cout<< st.size(); // 4

    cout << st.empty(); // False

    stack<int>st1, st2;
    st1.swap(st2);


}

// Queue (FIFO)
    void explainQueue(){
        queue<int> q;
        q.push(1); // {1}
        q.push(2); // {1,2}
        q.emplace(4); // {1,2,4}

        q.back() += 5;
        cout << q.back(); // prints 9

        // Q is {1,2,9}
        cout << q.front(); // prints 1

        q.pop(); // {2,9}
        cout <<"line no 161"<< endl;
        cout << q.front(); // prints 2

        // size swap empty same as stack
    }

// Priority Queue: Elements stores in the queue in such a way that the larger remains at the top.
// Doesn't follow the linear way
// Known as Maximum Heap
    void explainPriorityQueue(){
        priority_queue<int>pq;

        pq.push(5); // {5}
        pq.push(2); // {5,2}
        pq.push(8); // {8,5,2}
        pq.emplace(10); // {10,8,5,2}

        cout << pq.top(); // prints 10

        pq.pop(); // {8,5,2}

        // size swap empty functions same as others


        // Minimum Heap
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(5); // {5}
        pq.push(2); // {2,5}
        pq.push(8); // {2,5,8}
        pq.emplace(10); // {2,5,8,10}

        cout << pq.top(); // prints 2
    }

// set: stores in a sorted and unique way
    void explainSet(){
        set<int> st;
        st.insert(1); // {1}
        st.insert(2); // {1,2}
        st.insert(2); // {1,2}
        st.insert(4); // {1,2,4}
        st.insert(3); // {1,2,3,4}

        // Functionality of insert in vector can be used also, but only increases efficiency

        // begin(), end(), rbegin(), rend(), size(), empty(), and swap() are same as those above

        // {1,2,3,4,5}
        auto it = st.find(3); // returns an iterator(points the address) which points to the tree

        // {1,2,3,4,5}
        auto it = st.find(6); // if it doesn't belongs in the tree then it returns st.end()

        // {1,4,5}
        st.erase(5); // erases 5 and maintains the sorted order// takes logarithmic time

        int cnt = st.count(1); // counts the no of occruences of 1 which is obviiously 1 so it give 1 othewise 0

        auto it = st.find(1);
        st.erase(it); // it takes constant time

        // {1,2,3,4,5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1, it2); // after erase {1,4,5} [first, last]
    }

    // It only obeys sorted but not unique
    void explainMultiSet(){
        // Everything is same as set
        // stores duplicate elements also

        multiset<int> ms;
        ms.insert(1); // {1}
        ms.insert(1); // {1,1}
        ms.insert(1); // {1,1,1}

        ms.erase(1); // all 1's erased

        int cnt = ms.count(1); // gives the count of all the 1's

        // only a single one erased
        ms.erase(ms.find(1)); // it finds(points to the iterator) the position which is here given as the 1st postion and erases the address not the elements

        // ms.erase(ms.find(1), ms.find(1)+2);
        // rest all functions remains same as set

    }

    // Everything is similar to set like it stores the unique but the only difference is that it doesn't stores in a sorted order
    // it has randomised order

    void explain(){
        unordered_set<int> st;
        // lower_bound and upper_bound functions does not works, rest all functions are same as above, it does not stores in any particular order it has a better complexity than sets in most cases, except some when collision happens. 

        // time complexity of all the operations are O(1), but in the worst case then the unordered set goes for the O(n) linear time but its like once in a blue moon scenario.


    }

    // Map: suppose in a class with a particular name there can be many students btu what differentiate them is their roll number, so here in map, keys are like roll no which is unique and the value is like name.
    // keys == roll no --> unique
    // values == name --> can be same
    // so map stores data in the form of {key, value} pair and this key can be of any data types and same with the value too.
    // map stores unique keys in sorted order very much similar to sets

    void explainMap(){

        // this is how we denotes
        map<int, int>mpp;

        map<int, pair<int, int>>mpp;

        map<pair<int,int>, int>mpp;

        // this is how we stores [{1,2}, {2,4}, {3,1}]
        mpp[1] = 2; // stores {1,2}
        mpp.emplace(3,1); // stores {3,1} 3 as a key and 1 as a value
        mpp.insert({2,4}); // same 

        // mpp[{2,3}] = 10; // stores {[2,3], 10}

        // to iteratete on the map
        for(auto it : mpp){
            cout << it.first << " " << it.second << endl;
        }

        cout << mpp[1]; // prints 2
        cout << mpp[5]; // prints null or 0 since 5 is not available

        auto it = mpp.find(3); // this gives the address of the 3rd 
        // cout << *(it).second; // this will gives the value of it

        auto it = mpp.find(5); // pointing to the end if its not available in the map

        // This is the syntax
        auto it = mpp.lower_bound(2);

        auto it = mpp.upper_bound(3);

        // erase, swap, size, empty, are same as above

    }

    // Multimap: similar to map only difference is you can store duplicate keys too but in sorted order.
    void explainMultimap(){
        // only mpp[key] can not be used here
    }

    void explainUnorderedMap(){
        // not stored in sorted, stores randomly and it has unique keys only
        // same as set and unordered_set difference.
    }

    // sorting in c++ stl (Check notes)

    void explainExtra(){

        // check the notes
        // sort(a, a+n);
        // sort(v.begin(), v.end()); 
    }

    int main()
    {
        explainQueue();
        return 0;
}