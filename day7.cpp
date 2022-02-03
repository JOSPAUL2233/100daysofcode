#include<iostream>
using namespace std;

//prototyping functions
int nCr(int,int);
int factorial(int);
int main(){

    //finding ^n C r.
    //formula : ^n C r = n!/(r!*(n-r)!)
    int n,r;
    cout<<"Enter the value of n and r to find it's nCr : ";
    cin>>n>>r;

  
   
    int ans =nCr(n,r);
    cout<<"nCr of "<<n<<" is "<<ans<<"."<<endl;


    return 0;
}


int nCr(int n,int r){
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;

}

int factorial(int a){
    int ans = 1;
    for(int i = 1;i<=a;i++){
        ans = ans*i;
    }
    return ans;

}