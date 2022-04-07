#include<iostream>
using namespace std;


void insertion_sort(int arr[],int size);
void bubble_sort(int arr[],int size);
void selection_sort(int arr[],int n);
int main(){

    int arr[100] = {70,33,12,100,0};
    int size = 5;

    selection_sort(arr,size);

    //printing array after sorting.
    
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}

//------------------------MAIN ENDS HERE------------------------------


void insertion_sort(int arr[],int size){

    for(int i = 0;i<size-1;i++){
        
        int min = i;
        for(int j = i;j<size;j++){

            if(arr[min]>arr[j]){
            
                min = j;
            }

        }
        
        int a = arr[i];
        arr[i] = arr[min];
        arr[min] = a;

    }

}

void bubble_sort(int arr[],int size){

    for(int i = 0;i<size;i++){

        for(int j = 0;j<size-i-1;j++){

                //cout<<"arr[j] : "<<arr[j]<<endl<<"arr[j+1] : "<<arr[j+1]<<endl;
                cout<<endl;

                if(arr[j]>arr[j+1]){

                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;

                }

        }

    }


}

void selection_sort(int arr[],int n){

    for(int i = 0;i<n;i++){//OUTER LOOP

        int a = arr[i];

        int j = 0;
       
        for(j = i-1;j>=0;j--){//INNER LOOP FOR SHIFTING 
        
            if(arr[j]>a){

                arr[j+1] = arr[j];
              
            }else break;

        }

        arr[j+1] = a;

    }
    

}