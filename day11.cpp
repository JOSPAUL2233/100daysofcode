#include<iostream>
using namespace std;

void inputarr(int[],int);
int find_unique_element(int[],int);

int main(){

int arr[100] = {0};
int size = 0;

cout<<"Enter the size of the array: ";
cin>>size;
inputarr(arr,size);

int unique = find_unique_element(arr,size);

cout<<"Unique element is "<<unique<<endl;



    return 0;
}

//------------------------------------------------


void inputarr(int arr[],int size){
    cout<<"Enter the elements of the array: ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
}

int find_unique_element(int arr[],int size){

int ans = 0;
for(int i = 0;i<size;i++){

 ans ^=arr[i];

}
 return ans;

}