//10. Write a Program to Remove the Vowels from a String
#include<iostream>
using namespace std;
int main(){
    int j=0;
    string str;
    cout << "Enter a String to remove the vowels" << endl;
    cin >> str;
    for(int i=0;str[i]!='\0';i++)
{
            if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
{                str[j++]=str[i];
}

}
while (j < str.size()) {

        str[j] = '\0';

        j++;
    }
    cout << "String without vowels: " << str << endl;

}



