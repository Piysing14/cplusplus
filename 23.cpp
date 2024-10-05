//23. Write a Program to Print the Given String in Reverse Order
#include<iostream>
using namespace std;

int main(){
    string str;
    int len;

    cout<<"Enter a string to reverse\n";
    getline(cin, str);
    len=str.size();
    cout<<"reverse of string is: ";
    for(int i=len-1;i>=0;i--){
        cout<<str[i];
    }
    cout<<"\n";
}