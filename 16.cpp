// 16. Write a Program to Check the Prime Number
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isprime=true;
    cout << "enter a number\n";
    cin >> n;

   if(n<=1){
    isprime=false;
   }
   else{
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
   }

   if(isprime){
    cout<<n<<" is prime\n";
   }
   else{
    cout<<n<<" is not prime\n";
   }
}