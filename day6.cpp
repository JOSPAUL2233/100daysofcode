#include<iostream>
#include<math.h>
using namespace std;
//prototypes for the calculator.
int add(int,int);
int product(int,int);
int power(int,int);
float division(int,int);
int sub(int,int);

int main(){

    //Check a number whether it is a power of 2.
    // int n;
    // cout<<"Give a number : ";
    // cin>>n;
    
    // for(int i = 0;i<=30;i++){

    //     if(n == pow(2,i)){
    //         cout<<"Yes it is "<<i<<" upon 2, so it is a power of 2."<<endl;
    //         return 0;
    //     }

    // }
    // cout<<"No, it is not a power of 2."<<endl;

    //Calculator
    int a,b;
    float ans;
    char oper;
    cout<<"-----------------Calculator---------------------"<<endl;
    cout<<"Enter \n+ for addition\n- for substraction\n* for multiplication\n/ for division\nthen ^ for power."<<endl;
    cout<<"Give the 1st number : ";
    cin>>a;
    cout<<"Give the 2nd number : ";
    cin>>b;

    cout<<"Give the operation.(+,-,*,/,^) : ";
    cin>>oper;

    switch(oper){
        case '+':
        ans = add(a,b);
        break;

        case '-':
        ans = sub(a,b);
        break;

        case '*':
        ans = product(a,b);
        break;

        case '/':
        ans = division(a,b);
        break;

        case '^':
        ans = power(a,b);
        break;

        default:
        cout<<"INVALID INPUT!!!";
        return 0;
    }

    cout<<"ANS : "<<ans<<endl;


    return 0;
}

int add(int a,int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int product(int a,int b){
    return a*b;
}

int power(int a,int b){

    return pow(a,b);

}

float division(int a, int b){

    float res = (float)a/b;
    return res;
}