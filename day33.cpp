#include <iostream>

using namespace std;

void reverse(int[],int);
void print_Arr(int[],int);

int main(){
  //Reverse an array

  int arr[100] = {2,5,2,1,0};
  int size = 5;
  reverse(arr,size);
  print_Arr(arr,size);


    return 0;
}
void reverse(int arr[],int size){


    for(int i = 0;i<size/2;i++){

        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;

    }


}

void print_Arr(int arr[],int size){
    cout<<"Array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}