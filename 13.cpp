//13. Write a Program to Find the Sum of the First N Natural Numbers

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter a number  ";
    cin>>n;

    for (int i = 1; i<=n; i++)
    {
        sum+=i;
    }
    cout<<"Sum of the First "<<n<<" Natural Numbers is "<<sum<<endl; 

    

}