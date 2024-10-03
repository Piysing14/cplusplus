//18. Write a Program to Calculate the Sum of Elements in an Array

#include <iostream>
using namespace std;

int main()
{
    int arr[10], n,sum=0;
    cout << "Enter size of array" << endl;
    cin >> n;
    cout << "Enter " << n << " elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
       
    }

 
    cout << "sum: " << sum << endl;

}
