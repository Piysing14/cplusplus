//22 .Write a Program to  Swap the Values of Two Variables Without Using any Extra Variable

#include<iostream>
using namespace std;
    
int main(){
    int x,y;
    cout<<"Enter x\n";
    cin>>x;
    cout<<"Enter y\n";
    cin>>y;

    cout<<"Before: "<<"x="<<x<<" y="<<y<<endl;

    x = x + y;  
    y = x - y;  
    x = x - y;  

    cout<<"After: "<<"x="<<x<<" y="<<y<<endl;

    return 0;

}