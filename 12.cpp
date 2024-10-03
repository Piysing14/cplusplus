//12. Write a Program to Remove Spaces From a String

#include<iostream>
using namespace std;

int main(){
    string str1,str2;
    cout<<"enter any String\n";
    getline(cin, str1);

    for(char ch: str1){
        if(ch!=' '){
            str2+=ch;
        }
    }
    cout<<str2<<endl;
  
}





