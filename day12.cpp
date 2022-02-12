#include<iostream>
using namespace std;

void inputarr(int[],int);
void outputarr(int[],int);
int duplicate(int[],int);


int main(){

    int arr[100] = {0};
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    inputarr(arr,size);

    int dup = duplicate(arr,size);//this gives the duplicate element 
    cout<<"Duplicate element: "<<dup<<endl;


    

    

    return 0;
}

//TAKING ARRAY INPUT
void inputarr(int arr[],int size){

    cout<<"Enter the array elements: ";
    for(int i = 0 ;i<size;i++){
        cin>>arr[i];
    }
}

void outputarr(int arr[],int size){
    cout<<"Array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int duplicate(int arr[],int size){

    int ans = 0;

    for(int i = 0;i<size;i++){
        ans^=arr[i];            //XOR = CANCELLS OUT THE SAME ELEMENTS
    }

    for(int i = 1;i<size;i++){
        ans^=i;
    }

    return ans;

}