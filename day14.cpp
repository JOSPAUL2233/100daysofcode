#include<iostream>
using namespace std;


//prototypes----------
void passvalue(int);
void passref(int&);
void passptr(int*);


int main(){

    int x = 10;
    cout<<"x = "<<x<<endl;

    passvalue(x);
    cout<<"x = "<<x<<endl;

    passref(x);
    cout<<"x = "<<x<<endl;

    int *ptrx = &x;
    passptr(ptrx);
    cout<<"x = "<<x<<endl;

    return 0;
}


//--------------------------------------MAIN FUNCTION ENDS HERE---------------------------------------

void passvalue(int value){
    value = 20;
    cout<<"Value = "<<value<<endl;
}

void passref(int &ref){

    ref = 30;
    cout<<"ref = "<<ref<<endl;

}

void passptr(int *ptr){
    *ptr = 40;
    cout<<"*ptr = "<<*ptr<<endl;
}