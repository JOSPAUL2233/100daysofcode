#include<iostream>
using namespace std;

//ptototypes
void inputarr(int[],int);
void alterswap(int[],int);
void printarr(int[],int);
int findArrayIntersection(int[],int[],int[],int,int);

int main(){

    int arr1[100] = {0};
    int size1 = 0;
    int arr2[100] = {0};
    int size2 = 0;
    int res1_arr[100] = {0};//resultand array
    int size_res = 0;

    //TAKING THE SIZE OF BOTH THE ARRAYS-------------
    cout<<"Enter the size of the 1st array : ";
    cin>>size1;

    cout<<"Enter the size of the 2nd array : ";
    cin>>size2;


    //TAKING THE INPUTS OF BOTH THE ARRAYS-----------
    cout<<"1st array:"<<endl;
    inputarr(arr1,size1);
    cout<<"2nd array:"<<endl;
    inputarr(arr2,size2);
    
    size_res = findArrayIntersection(arr1,arr2,res1_arr,size1,size2);

    cout<<"Entersector array of both the arrays is: ";
    
    printarr(res1_arr,size_res);
    //cout<<size_res<<endl;



    return 0;
}
//------------END OF MAIN FUNCTION------------------------------------------------




void inputarr(int arr[],int size){
    cout<<"Enter the elements of the array: ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
}

void alterswap(int arr[],int size){

    for(int i = 1;i<size;i = i+2){
        
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }

}

void printarr(int arr[],int size){

    //cout<<"Array Elements: ";

    for(int i = 0 ;i<size;i++){

        cout<<arr[i]<<" ";

    }

    cout<<endl;

}

int findArrayIntersection(int arr1[],int arr2[],int res1_arr[],int size1,int size2){
    
    int count = 0;
    for(int i = 0;i<size1;i++){

        for(int j = 0;j<size2;j++){

                if(arr1[i] == arr2[j]){
                    
                    res1_arr[count] = arr1[i];
                    count++;

                }

        }

        //cout<<"inside find array intersection."<<endl;
        
    }
    
    return count;

    
}