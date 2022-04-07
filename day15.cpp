/****************

CODER : Jos Paul
DATE : 11-02-2022

*****************/

#include<iostream>
using namespace std;

int binary_search(int[],int,int);
int arr_left_right_f(int[],int,int,int[]);
int peak_element(int[],int);


int main(){

 int arr[100] = {1,2,4,7,8};//for(   1   ) and also give the size in a variable called size
//  int arr[100] = {1,2,2,2,3};//for(   2   ) also give it's size in a variable called size
//  int arr_left_right[2] = {0};//for(   2   ) give it's size
   //int arr[100] = {0,3,6,7,8,2,1}; //mountain array
   int size = 5;
 int key = 4;//forgiving a key when it is required (for both (   1   ) and (   2   ))




//---------------(   1   )for searching an element with the help of binary search.------------------------
    int index = binary_search(arr,size,key);

    if(index == -1)cout<<"ELEMENT NOT FOUND.";
    else cout<<"Element is found in index "<<index<<"."<<endl;

    


//----------------(   2   )for finding the first accurance and the last accurance of the element.--------------------
    // int count = arr_left_right_f(arr,size,key,arr_left_right);
    // if(count == -1)cout<<"ELEMENT NOT FOUND.";

    // else{

    //         cout<<"First accurance is in index : "<<arr_left_right[0]<<endl;
    //         cout<<"second accurance is in index : "<<arr_left_right[1]<<endl;

    //         cout<<"So, there are "<< arr_left_right[1] - arr_left_right[0]+1<<" given elements."<<endl;
            

    // }
//-------------------(   3   )for finding out the peak element in a mountain array.-----------------------------
    // int peak_index = peak_element(arr,size);
    // cout<<"The peak element is in index "<<peak_index<<"."<<endl;

    

    return 0;
}
//------------------MAIN FUNCTION ENDS HERE------------------------


//-----------normal binary search-----------------
int binary_search(int arr[],int size,int key){


    int start = 0;
    int end = size-1;

    while(start<=end){

        int mid = start+((end-start)/2);
        if(arr[mid] == key)return mid;
        if(arr[mid]<key)start = mid+1;
        if(arr[mid]>key)end = mid-1;

    }
    return -1;

    


}



//-------------binary search for finding first and last appearance of the element-------------------------

int arr_left_right_f(int arr[],int size,int key,int res[]){

    int start = 0;
    int end = size-1;
    int ans = -1;
    while(start<=end){

        int mid = start+((end-start)/2);
        if(arr[mid] == key){
            
           res[0] = mid;
            end = mid-1;
            ans = 1;
            
        
        }
        if(arr[mid]>key)end = mid-1;
        if(arr[mid]<key)start = mid+1;


    }

    start = 0;
    end = size-1;

    while(start<=end){

        int mid = start+((end-start)/2);
        if(arr[mid] == key){
            
           res[1] = mid;
           start = mid+1;
           ans = 1;
        
        }
        if(arr[mid]>key)end = mid-1;
        if(arr[mid]<key)start = mid+1;


    }
    
    return ans;

}



//-----------------------function to find the index in which the peak element is present in a mountain array.
int peak_element(int arr[],int size){

    int start = 0;
    int end = size-1;
    int mid = 0;
    while(start<=end){

        mid = start+((end-start)/2);

        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        if(arr[mid]<arr[mid+1])start = mid+1;
        if(arr[mid]<arr[mid-1])end = mid-1;

    }
    return -1;

}