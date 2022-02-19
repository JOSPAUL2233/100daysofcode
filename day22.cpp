#include<iostream>
using namespace std;


void insertion_sort(int arr[],int size);
int main(){

    int arr[100] = {70,33,12,100,0};
    int size = 5;

    insertion_sort(arr,size);


    //printing array after sorting.
    
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}

//------------------------MAIN ENDS HERE------------------------------


void insertion_sort(int arr[],int size){


   for(int i = 1;i<size;i++){

       int temp = arr[i];
       int j=0;

       for(j = i-1;j>=0;j--){

           if(temp<arr[j]) arr[j+1] = arr[j];
           else break;

       }
       arr[j+1] = temp;


   }
   


}