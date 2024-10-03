//11. Write a Program to Remove All Characters From a String Except Alphabets

#include<iostream>
using namespace std;

int main(){
    string str;
    int j=0;
    cout<<"enter any String\n";
    cin>>str;

    for(int i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            str[j++]=str[i];
        }
    }

    while (j < str.size()) {

        str[j] = '\0';

        j++;
    }

    cout<<str<<endl;
}


