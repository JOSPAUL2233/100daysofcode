#include<iostream>
using namespace std;

int find_pivot_element(int arr[],int size);
int binary_search(int arr[],int s,int e,int key);


int main(){

//Program to find search an element in a rotated sorted array.

    int arr[100]= {4,5,6,2,3};
    int size = 5;
    int key = 3;

    int pivert_index =find_pivot_element(arr,size);
    int index = 0;

    if(key>=arr[0] && key<=arr[pivert_index - 1]){

        index = binary_search(arr,0,pivert_index-1,key);

    }else{

        index = binary_search(arr,pivert_index,size-1, key);

    }

    if(index == -1){

            cout<<"ELEMENT IS NOT PRESENT IN THIS ARRAY!!!"<<endl;

    }else{

             cout<<"ELEMENT IS PRESENT IN INDEX : "<<index<<endl;

    }

   


    return 0;
}

//----------------MAIN FUNCTION ENDS HERE !!!--------------------




//--------------FUNCTION FOR GETTING THE INDEX OF THE PIVOT ELEMENT-------------

int find_pivot_element(int arr[],int size){

    int start = 0;
    int end = size-1;
    while(start<=end){
        int mid = start+((end-start)/2);

        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]) return mid;
        if(arr[mid]>arr[0])start = mid+1;
        if(arr[mid]<arr[0])end = mid-1;


    }
    return -1;


}
//-------------FUCNTION FOR SEARCHING AN ELEMENT FROM AN ARRAY USING BINARY SEARCH----------------

int binary_search(int arr[],int s,int e,int key){


    while(s<=e){
        int mid = s+((e-s)/2);
        if(arr[mid]==key)return mid;
        if(arr[mid]<key)s = mid+1;
        if(arr[mid]>key)e = mid-1;

    }
    return -1;

}
