#include<iostream>
#include<vector>
using namespace std;
int arrayPairSum(vector<int>& nums);
void print(int arr[],int n){

    for(int i = 0;i<n;i++){

    cout<<arr[i]<<" ";

    }

    cout<<endl;

}

void merge(int arr1[],int size1,int arr2[],int size2,int arr[],int size);

int main(){

    // int arr1[100] = {1,2,3,0,0,0};
    // int size1 = 3;

    // int arr2[100] = {2,5,6};
    // int size2 = 3;

    // int arr[100] = {0};
    // int size = 6;
    // print(arr,size);
    // merge(arr1,size1,arr2,size2,arr,size);
    // print(arr,size);

    vector<int> nums;
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(2);


   cout<<arrayPairSum(nums)<<endl;
    cout<<"FINALLY"<<endl;
   for(int i = 0;i<nums.size();i++){
       cout<<nums[i]<<" ";
   }
   cout<<endl;



    return 0;
}

void merge(int arr1[],int size1,int arr2[],int size2,int arr[],int size){


    int i = 0;
    int j = 0;
    int k = 0;
    while(i<size1 && j<size2){

       
        if(arr1[i]<=arr2[j]){

                arr[k] = arr1[i];
                i++;

        }else{
                 
                arr[k] = arr2[j];
                j++;

        }
        k++;


    }
    
        while(j<size2){
            arr[k] = arr2[j];
            k++;
            j++;
        }
        
        while(i<size1){
            arr[k] = arr1[i];
            k++;
            i++;
      
    }

}

int arrayPairSum(vector<int>& nums) {
        
        int ans = 0;
        
        for(int i = 0;i<nums.size();i++){
            
            for(int j = 0;j<nums.size()-1-i;j++){
                
                if(nums[j]>nums[j+1]){
                    
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    
                }
                
            }
            
        }
        
        for(int i = 0;i<nums.size();i=i+2){
            
            ans+=nums[i];
            
        }
        
        return ans;
    }