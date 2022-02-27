#include<iostream>
#include<queue>
#include<set>
using namespace std;
int main(){



    //--------------MAX HEAP OF PRIORITY QUEUE----------------

    priority_queue<int> max; //max heap
  
    // max.push(1);
    // max.push(5);
    // max.push(2);
    // max.push(2);
    // max.push(2);

    // for(int i = 0;max.size();i++){
    //     cout<<max.top()<<endl;
    //     max.pop();
    // }

    //--------------MIN HEAP OF PRIORITY QUEUE----------------

    priority_queue<int,vector<int>,greater<int>> min;//min heap

    // min.push(4);
    // min.push(2);
    // min.push(0);
    // min.push(10);

    //  for(int i = 0;min.size();i++){
    //     cout<<min.top()<<endl;
    //     min.pop();
    // }
    
    //-------------SET----------------

    set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(0);
    // s.insert(5);
    // s.insert(4);
    // s.insert(2);
    // s.insert(0);


    // for(int i:s){

    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // set<int>::iterator it = s.begin();
    // it++;

    // s.erase(it);

    // cout<<"After erasing : ";
    //  for(int i:s){

    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // it = s.find(4);
    // cout<<*it<<endl;

    return 0;

}