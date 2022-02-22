#include<iostream>
#include<vector>
#include<array>


using namespace std;

int main(){

    

    //--------------ARRAY-----------------

    array<int,3> arr;
     arr = {1,2,4};

    cout<<endl;

    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<(arr.empty()?"array is empty":"array is not empty")<<endl;
    // cout<<"First element in the array is : "<<arr.front()<<endl;
    // cout<<"Last element in the array is : "<<arr.back()<<endl;


    

    //-----------------VECTOR-------------------

    vector<int> v(5);
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);

    // cout<<"Capacity of the vector is : "<<v.capacity()<<endl;
    // cout<<"Size of the vector is : "<<v.size()<<endl;
    // cout<<"First element in the vector is : "<<v.front()<<endl;
    // cout<<"Last element in the vector is : "<<v.back()<<endl;

    // cout<<"Before performing pop back operation: ";
    //  for(auto i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // v.pop_back();
    // cout<<"After performing pop back operation: ";
    //  for(auto i:v){
    //     cout<<i<<" ";
    // }


    

    



    return 0;
}