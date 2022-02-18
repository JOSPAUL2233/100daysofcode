#include<iostream>
using namespace std;

int find_pivot_element(int arr[],int size);

int main(){

    int arr[100] = {4,5,6,1,2,3};
    int size = 6;
    int pivot_element = find_pivot_element(arr,size);
    cout<<"The pivot element is "<<pivot_element<<endl;


    return 0;
}
//---------------------MAIN FUNCTION ENDS HERE!!!------------------------------------


int find_pivot_element(int arr[],int size){

    int start = 0;
    int end = size-1;
    while(start<=end){
        int mid = start+((end-start)/2);

        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]) return arr[mid];
        if(arr[mid]>arr[0])start = mid+1;
        if(arr[mid]<arr[0])end = mid-1;


    }
    return -1;


}