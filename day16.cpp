#include<iostream>
using namespace std;

int convertFive(int);

int main(){


int n;
cout<<"Enter a number to replace all the 0's in it with 5's: ";
cin>>n;

int res = convertFive(n);
cout<<"After replacing : "<<res<<endl;
    return 0;
}


 int convertFive(int n)
    {
      string a = to_string(n);
      int res{};
      
      for(int i = 0;i<a.length();i++){
          
          if(a[i] == '0')a[i] = '5';
          
          
      }
      res = stoi(a);
      return res;
    }