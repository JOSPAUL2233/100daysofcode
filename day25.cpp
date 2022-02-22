#include<iostream>
#include<deque>
#include<list>
#include<stack>
#include<queue>

using namespace std;

int main(){

//---------------------DEQUE--------------------------

    // deque<int> d;
    // d.push_back(1);
    // d.push_back(4);
    // d.push_front(2);

    // cout<<"Deque elements are :";
    // for(int i : d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // d.pop_back();
    // cout<<"after doing pop back operation: ";
    // for(int i : d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    
    //---------------------LIST-----------------------

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);

    // l.erase(l.begin());

    // for(int i : l){
    //     cout<<i<<" "; 
    // }
    // cout<<endl;

    //---------------------STACK---------------------------

    // stack<string> s;
    // s.push("hello");
    // s.push("2ndElement");
    // s.push("jos");
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;

    //------------------------QUEUE-------------------------
    queue<string> s;
    s.push("jos");
    s.push("paul");
    s.push("last");
    cout<<s.front()<<endl;
    s.pop();
    cout<<s.front()<<endl;


    return 0;
}