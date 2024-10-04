// 31. Write a Program to Print the Rotated Hourglass Pattern
#include <iostream>
using namespace std;

int main()
{
    int n, row, col,a=1;
    cout << "Enter numnber of columns";
    cin >> n;

    for (row = n; row >= 1; row--)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << " ";
        }  

        for(col = 1; col <= 2 * row - 1; col++)
        {
            cout << a;
            a++;
        }
        cout << "\n";
    }

   
    return 0;
}