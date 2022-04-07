#include<iostream>

using namespace std;

int main(){

    int t;
    cout<<"No of Test Cases: ";
    cin>>t;

    while(t--){

    int r,c,arr[100][100];
    cout<<"ENTER NUMBER OF RAWS:";
    cin>>r;

    cout<<"ENTER NUMBER OF COLUMNS:";
    cin>>c; 

    for(int i = 0;i<r;i++){

        for(int j = 0;j<c;j++){
            cin>>arr[i][j];
        }

    }


    int count = 1;
    int endPoint = r*c;

    int startRaw = 0;
    int endRaw = r-1;
    int startColumn = 0;
    int endColumn = c-1;

    cout<<endl;

    while(count<=endPoint){

        for(int i = startColumn;i<=endColumn && count<=endPoint;i++){

            cout<<arr[startRaw][i]<<" ";
            count++;
        }
        
        startRaw++;

        for(int i = startRaw;i<=endRaw && count<=endPoint;i++){

            cout<<arr[i][endColumn]<<" ";
            count++;

        }

        endColumn--;

        for(int i = endColumn;i>=startColumn && count<=endPoint;i--){

            cout<<arr[endRaw][i]<<" ";
            count++;

        }

        endRaw--;

        for(int i = endRaw;i>=startRaw && count<=endPoint;i--){

            cout<<arr[i][startColumn]<<" ";
            count++;

        }

        startColumn++;

    }
    
    }
    
    return 0;
}