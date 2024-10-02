//7. Write a Program to Find the Length of the String Without using strlen() Function 

#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String to find its length"<<endl;
    cin>>str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<"length of "<<str<<" is "<<count<<endl;
}


