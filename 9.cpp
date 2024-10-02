//9. Write a Program to Count the Number of Vowels 
#include <iostream>
using namespace std;

int main()
{
    string str;
    int count=0;
    cout << "Enter a String to count the vowels" << endl;
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }

    }
        cout<<"There are "<<count<<" number of vowels in "<<str<<endl;
}



