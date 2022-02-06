#include<iostream>
using namespace std;

//prototypes
void arrinput(int[],int); //takes input of the array.
void rev(int[],int);//reverses the array.
void printarr(int[],int);//prints the array elements.

int main(){

    int arr[100]={0};
    int size = 0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    arrinput(arr,size);
    // rev(arr,size);
    
    printarr(arr,size);


    return 0;
}
void arrinput(int arr[],int size){

    cout<<"Give the elemets of the array: ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

}
void rev(int arr[],int size){

    for(int i = 0;i<size/2;i++){
        int temp = arr[i]; 
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

}

void printarr(int arr[], int size){
    cout<<"Array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

