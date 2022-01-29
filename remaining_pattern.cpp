#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    //UNCOMMENT ANY PART TO RUN THAT PATTERN.

    // char ch = 'A';
    //------------------------------------------------------------------------------------------------------
    // E 
    // D E 
    // C D E 
    // B C D E 
    // A B C D E 
    // for(int i  = 0;i<n;i++){
    //         char a = ch+n-1-i;
    //         for(int j = 0;j<=i;j++){

    //                cout<<a<<" ";
    //                a++;

    //         }

    //         cout<<endl;

    // }
    //---------------------------------------------------------------------------------------------------------
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

    // for(int i = 0;i<n;i++){

    //     for(int j = 0;j<n-1-i;j++){

    //             cout<<"  ";

    //     }
    //     for(int j = 0;j<=i;j++){

    //             cout<<"* ";

    //     }
    //     cout<<endl;


    // }
    //------------------------------------------------------------------------------------------------------

//     1
//    121
//   12321
//  1234321
// 123454321
    // for(int i = 0;i<n;i++){

    //     for(int j = 0;j<n-1-i;j++){//for spaces

    //         cout<<" ";
            
    //     }

    //     for(int j = 0;j<=i;j++){//middle part

    //         cout<<j+1;


    //     }

    //     for(int j = 0;j<=i-1;j++){//tail part

    //         cout<<i-j;

    //     }
    //     cout<<endl;
    // }
//----------------------------------------------------------------------------------------------------------------------

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
    // for(int i = 0;i<n;i++){

    //     for(int j = 0;j<n-i;j++){//1st part of numbers

    //         cout<<j+1;

    //     }
    //     for(int j = 0;j<2*i;j++){//middle part or the star part

    //         cout<<"*";

    //     }
    //     for(int j = 0;j<n-i;j++){//tail part of numbers

    //         cout<<n-i-j;

    //     }
    //     cout<<endl;


    // }


    return 0;
}