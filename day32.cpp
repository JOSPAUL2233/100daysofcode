#include <iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

// map<int,string> roll;
// roll[1] = "Jos";
// roll[5] = "Akash";
// roll[0] = "Kiran";
// roll[4] = "Jos";

// for(auto i:roll){
//     cout<<i.first<<" --> "<<i.second<<endl;
// }

// cout<<"5 is present or not : "<<roll.count(5)<<endl;

vector<int> v;
v.push_back(1);
v.push_back(10);
v.push_back(15);
v.push_back(50);

cout<<"Check whether 5 is there or not --> "<<binary_search(v.begin(),v.end(),10)<<endl;



    return 0;
}