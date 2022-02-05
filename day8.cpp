#include<iostream>
using namespace std;
//prototyping
void arr_input(int[],int);
void arr_print(int[],int);
int max_ele(int[],int);
int min_ele(int[],int);

int main(){
    //finding max and min in an array.
    int arr[100]={0};
    int size{};
    cout<<"Enter the size of the array :";
    cin>>size;
    cout<<"Enter the elements of the array :";


    arr_input(arr,size); //taking input

    int max = max_ele(arr,size);

    int min = min_ele(arr,size);


    

    cout<<"Min: "<<min<<endl<<"Max: "<<max<<endl;


    return 0;
}


void arr_input(int arr[],int size){
    cout<<"Give your array elements: ";
    for(int i = 0;i<size;i++){

        cin>>arr[i];

    }
}

int max_ele(int arr[],int size){

    int max = INT_MIN;

    for(int i = 0;i<size;i++){

        if(arr[i]>max) max = arr[i];

    }

    return max;

}

int min_ele(int arr[],int size){

    int min = INT_MAX;
    for(int i = 0;i<size;i++){
        if(arr[i]<min)min = arr[i];
    }

    return min;

}