#include<iostream>
using namespace std;

void selection_sort(int[],int);
void bubble_sort(int[],int);
void print_arr(int[],int);

int main(){

    int arr[100] = {1,15,2,100,3,0};
    int size = 6;

    selection_sort(arr,size);
    cout<<"FROM SELECTION SORTING: "<<endl;
    print_arr(arr,size);


    bubble_sort(arr,size);
    cout<<"FROM BUBBLE SORTING: "<<endl;
    print_arr(arr,size);


    return 0;
}


//---------SORTING VIA SELECTION SORTING METHOD-----------


void selection_sort(int arr[],int size){

    for(int i = 0;i<size;i++){

        
        int index_min = i;

        for(int j = i+1;j<size;j++){

            if(arr[index_min]>arr[j]){

            index_min = j;

            } 

        }

        int temp = arr[i];
        arr[i] = arr[index_min];
        arr[index_min] = temp;

    }

    
}

//-----------------TO PRINT ARRAY------------------------
void print_arr(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


//---------SORTING VIA SELECTION BUBBLE METHOD-----------


void bubble_sort(int arr[],int size){


    for(int i = 0;i<size-1;i++){
        for(int j = 0;j<size-i;j++){

               if(arr[i]>arr[i+1]){
                    
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
               }

        }
    }



}