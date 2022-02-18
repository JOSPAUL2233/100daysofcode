#include<iostream>
using namespace std;

int min_arr(int[],int);
int book_alloc(int[],int);
int sum_arr(int[],int);
int sum_arr(int[],int,int);

int main(){



    int arr[100] = {5,2,6,2,3};
    int size = 5;
    

    int ans = book_alloc(arr,size);   //returns for only num = 2.


    cout<<"ANS: "<<ans<<endl;
    
    return 0;
}
//-------------------MAIN FUNCTION ENDS HERE-------------------

int book_alloc(int arr[],int size){

    int min = min_arr(arr,size);
    int max = sum_arr(arr,size);
    int mid = 0;
    int ans = 0;
    

    while(min<=max){ 

       

        int arr_sum1 = 0;
        int arr_sum2 = 0;

        mid = (min+max)/2;
        

        for(int i = 0;i<size;i++){ //stores the sum of 1st and 2nd part of the array.


            if((arr_sum1+arr[i])>mid){
                
                arr_sum2 = sum_arr(arr,i,size);
                
                break;
            }

            arr_sum1+=arr[i];

        }

        if((arr_sum1 <= mid) && (arr_sum2<=mid)){

            max = mid-1;
            ans = mid;
            

        }else{

            min = mid+1;

        }




    }


    return ans;

}

int min_arr(int arr[],int size){        //find the min value

    int min = arr[0];
    for(int i = 0;i<size;i++){

        if(arr[i]<min)min = arr[i];

    }
    return min;

}

int sum_arr(int arr[],int size){    //find the sum of elements

    int ans = 0;
    for(int i = 0;i<size;i++){
        ans+=arr[i];
    }
    return ans;

}

int sum_arr(int arr[],int ini,int size){    //find the sum of elements

    int ans = 0;
    for(int i = ini;i<size;i++){
        ans+=arr[i];
    }
    return ans;

}

