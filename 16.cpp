Algorithms
Containers
Functions
Iterators

// pairs
void explainPair(){
    pair<int,int> p={1,3};

    cout << p.first << " " << p.second;

    pair<int, pair<int,int>> p={1,{3,4}};

    cout << p.first << " " << p.second.second << " " << p.second.first;

    pair<int,int> arr[]={{1,2},{2,5},{5,1}};

    cout << arr[1].second;
}

// vectors
void explainVector(){
    vector<int> v;   // {}

    v.push_back(1);     // {1}
    v.emplace_back(2);     // similar to push_back {1,2}

    vector<pair<int,int>> vec;

    v.push_back({1,2}); 
    v.emplace_back(1,2);

    vector<int> v(5,100);

    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it=v.begin();     // v[0]

    it++;
    cout << *(it) << " ";    // v[1]

    it=it+2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();   // end ,it stores the last after element not last element address

    vector<int>::iterator it = v.rend(); // rend : reverse end points to first before element address

    vector<int>::iterator it = v.rbegin();  // rbegin it points to address of last element and if we increase it as it++ then it points to the element before last element

    cout << v[0] << " " << v.at(0);

    cout << v.back() << " ";   // it stores the last element

    for(vector<int>::iterator it=v.begin();it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it=v.begin();it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it : v){       // for each loop suppose vector {10,20,30}
        cout << it << " ";  // that vector is int type so it automatically stores the it value of type as int
    }

    // {10, 20, 12, 23}
    v.erase(v.begin()+1);   // begin()+1 stores 20 so, it erase 20 from the vector =>{10,12,23}

    // {10, 20, 12, 23, 35}
    v.erase(v.begin()+2,v.begin()+4); // {10, 20, 35} {start , end}         erase(start, end)

    // insert function
    vector<int> v(2,100); // {100 , 100}

    v.insert(v.begin(),300); // {300 ,100 ,100}

    v.insert(v.begin()+1, 2, 10);  // {300, 10, 10, 100, 100}

    vector<int> copy(2,50);    // {50, 50}

    v.insert(v.begin(), copy.begin(), copy.end());     // {50 ,50 ,300 ,10 ,10 ,100 ,100}

    // { 10, 20}
    cout << v.size();    // 2

    // { 10, 20}
    v.pop_back();     // { 10 }

    // v1 -> {10 ,20}
    // v2 -> {30 ,40}
    v1.swap(v2);   // v1 -> {30 ,40} , v2 -> {10, 20}

    v.clear();    // erases the entire vector

    cout << v.empty();      // atleast vector has one element the it gives false 
      // returns true vector has no elements

}

void explainList(){
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4);     // {2, 4}

    ls.push_front(5);     // {5, 2, 4}

    ls.emplace_front(); { 2, 4};
    
    // rest of the functions are same as vector
    // begin , end, rbegin, rend, clear , insert , size , swap
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(1);   // {1}
    dq.emplace_back(2);     // {1 ,2}
    dq.push_front(4);       //  {4, 1, 2}
    dq.emplace_front(3);    // {3 ,4, 1, 2}

    dq.pop_back();  // { 3, 4, 1}
    dq.pop_front();    // {4, 1}

    dq.back();

    dq.front();

    // rest of the functions same as vector
    // begin , end, rbegin, rend, clear , insert , size , swap
}

void explainStack(){
    stack<int> st;      // LIFO - last in first out    operations - push, pop, top  => complexity O(1)
    st.push(1); // {2}
    st.push(2);  // {2, 1}
    st.push(3);  // {3, 2, 1}
    st.push(3);  // {3, 3, 2, 1}
    st.emplace(5);  // { 5, 3 , 3, 2 ,1}

    cout << st.top(); // print 5    "** st[2] is not valid **"

    st.pop()        // st look like {3, 3, 2, 1}

    cout << st.top();   // 3

    cout << st.size();      // 4

    cout << st.empty();

    stack<int> st1,st2;
    st1.swap(st2);
}

void explainQueue(){
    queue<int> q;           // FIFO - first in first out
    q.push(1);      // {1}
    q.push(2);      // {1 ,2}
    q.emplace(4);       // {1, 2, 4}

    q.back() += 5;   // {1, 2, 9}

    cout << q.back();       // prints 9

    // Q is {1, 2, 9}
    cout << q.front();  // prints 1

    q.pop();    // {2, 9}

    cout << q.front();  // prints 2

    // size swap empty same as stack
}

void explainPQ(){
    priority_queue<int> pq;     // push - log n  ; pop - O(1) ; pop - log n

    pq.push(5);   // { 5}
    pq.push(2);   // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10);   // {10, 8 , 5 , 2}

    cout << pq.top();   // prints 10

    pq.pop();     // {8, 5, 2}

    cout << pq.top();   // print 8

    // size swap empty function same as others

    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);    // {5}
    pq.push(2);     // {2, 5} 
    pq.push(8);    // { 2, 5, 8}
    pq.emplace(10);    // {2, 5, 8, 10}

    cout << pq.top();   // prints 2
}

void explainSet(){
    set<int> st;    // set  => sorted and unique     complexity - log(n)
    st.insert(1);  // {1}
    st.insert(2);   // {1,2}
    st.insert(4);   // {1,2,4}
    st.insert(3);   // {1,2,3,4}

    // functionality of insert in vector
    // can be used also , that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1,2,3,4,5}
    auto it=st.find(3);

    // {1,2,3,4,5}
    auto it=st.find(6);

    // {1,4,5}
    st.erase(5); // erases 5 // takes logarthic time

    int cnt = st.count(1);  

    auto it = st.find(3);
    st.erase(it);  // it takes constant time

    // {1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);  // after erase {1,4,5} {first , last}

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does

    // this is the syntax
    auto it= st.lower_bound(2);

    auto it=st.upper_bound(3);

}

void explainMultiset() {
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1);     // {1}
    ms.insert(1);    //  {1,1}
    ms.insert(1);    // {1,1,1}

    ms.erase(1);   // all 1's erased

    int cnt=ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2);

    // rest all function same as set
}

void explainUset() {
    // lower_bound and upper_bound function does not works, rest of all functions are same
    // O(1)
    // as above , it doesnot stores in any particular order it has a better complexity
    // than set in most cases , except some when collision happens
}

void explainMap() {

    map<int,int> mp;

    map<int, pair<int,int>> mp;

    map< pair<int,int>,int> mp;

    mp[1] = 2;
    mp.emplace({3,1});

    mp.insert({2,4});

    mp[{2,3}] =10;

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1];
    cout << mp[5];

    auto it = mp.find(3);
    cout << *(it).second;

    auto it = mp.find(5);

    // this is the syntax
    auto it=mp.lower_bound(2);

    auto it=mp.upper_bound(3);

    // erase, swap, size, empty ,are same as above
}

void explainMultimap() {
    // everything same as map ,only it can store multiple keys
    // only mp[key] cannot be used here

}

void explainUnorderedMap() 
{
    // same as set and unordered_set differences
}

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same

    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra(){
    sort(a,a+n);   // a is the starting point and a+n is the ending point for what you want to sort
    sort(v.begin(),v.end());   // sort vector

    sort(a+2,a+4);
    
    sort(a,a+n,greater<int>);  // sorting descending order   greater acomparator

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    // sort it according to second element 
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a,a+n,comp);   // self return comperator, it has boolean value is nothing boolean function 

    // {4,1}, {2,1} , {1,2}

    int num=7;
    int cnt=__builtin_popcount();  // __builtin_popcount()  it gives how many ones in the binary form of that particular value
                                    // for 7 it gives 3
    long long num = 165786578687;
    int cnt = __builtin_popcountll();

    string s="123";
    sort(s.begin(),s.end());

    do {
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+n);  // it gives value when we remove star it gives address of max element
    int mini = *min_element(a,a+n);   // this for min element

}

int main(){
    return 0;
}