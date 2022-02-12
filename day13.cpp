#include<iostream>
using namespace std;

void inputarr(int[],int);
void outputarr(int[],int);
int find_triplet(int[],int[],int,int);

int main(){
    int size;
    int arr[100] = {0};
    int num = 0;
    int trip[3] = {0};

    cout<<"Enter the size of the arra :";
    cin>>size;
    inputarr(arr,size);

    cout<<"Enter the number for which you want to find the triplets in the given array : ";
    cin>>num;

    bool ans = find_triplet(trip,arr,size,num);

    if(ans == 0){
        cout<<"Your triplet ";
        outputarr(trip,3);
    }
    else{
        cout<<"Sorry, we couldn't find any triplets."<<endl;
    }
    

    return 0;
}


//-------------------MAIN ENDS HERE-------------------



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

int find_triplet(int trip[],int arr[],int size,int num){


    for(int i = 0;i<size;i++){ //--------first loop

            for(int j = 0;j<size;j++){//-------second loop

                    if(j == i)continue;

                        for(int k = 0;k<size;k++){//-----------third loop

                        if(k==j || k==i)continue;

                        if(arr[i]+arr[j]+arr[k] == num){

                            trip[0] = arr[i];
                            trip[1] = arr[j];
                            trip[2] = arr[k];
                            return 0;

                        }
                    }
            }


    }

    return -1;

}