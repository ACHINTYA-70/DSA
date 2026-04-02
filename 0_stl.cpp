#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<unordered_set>
// #include<uno///rdered_set>
#include<map>
using namespace std;

void explainPair(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int,int>> s={1,{2,3}};
        cout<<s.first<<" "<<s.second.second<<" "<<s.second.first<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[2].first;
}

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vecP;
    vecP.push_back({1,2});
    vecP.push_back({1,2});

    vector<int> v1(5,100); //{100,100,100,100,100}
    vector<int> v(5); //{0,0,0,0,0}

    vector<int> v2(v1); //copy of v1

    vector<int>::iterator it=v.begin();  // here begin pointing to a memory/address of the array ist element after that 
    it++;  // goes to 2nd element address after adding 
    cout<<*(it)<<" ";  // output will be 10 because 'it' points to memory but '*' get the value


    vector<int>::iterator it=v.end();  // end here 'v' points to the addess after the last element
    // vector<int>::iterator it=v.rend();  // reverse order nvr used
    // vector<int>::iterator it=v.rbegin(); //

    for(auto it:v){  // automatically prints
        cout<<it<<endl;
    }
}

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(3);
    ls.emplace_front(2);
}

void explainDeque(){
    deque<int> dq;
    // same as list and vector but also include pop_back etc
}

void explainStack(){  // LIFO  // O(1)
    stack<int> st;
    st.push(1);
    st.top();
    st.pop();
    st.empty();
    st.size();
}

void explainQueue(){  //FIFO   // O(1)
    queue<int> q;
    q.push(1);
    q.front();
    q.pop();
    q.back();
}

void explainPriorityQueue(){  // push-> log(n) ,top-> O(1) ,pop-> log(n)
    priority_queue<int> pq;
    pq.push(1);
    pq.top();
    pq.pop();
}

void explainSet(){  //unique and sorted order
    set<int> q;
    q.insert(1);
    q.find(1);
    q.erase(1);
    q.count(1);
}

void explainUnordered_Set(){  //unique and but not in sorted order
    unordered_set<int> q;
    q.insert(1);
    q.find(1);
    q.erase(1);
    q.count(1);
}

int main()
{
    explainPair();
    explainVector();
    return 0;
}
