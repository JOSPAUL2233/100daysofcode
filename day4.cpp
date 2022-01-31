#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number to find its Binary value : ";
    cin>>n;
    int bit = 0;
    int count = 0;
    while(n!=0){

        bit = (n&1)*pow(10,count) + (bit);

        n = n>>1;
        count++;

    }
    cout<<"Binary : "<<bit;


    return 0;
}