//24. Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<" Enter a and b\n";
    cin>>a>>b;

    if(a^b){
        cout<<a<<" and "<<b<<" are NOT equal\n";
    }
    else{
        cout<<a<<" and "<<b<<" are equal\n";
    }


}