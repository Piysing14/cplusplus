// 19. Write a Program to Print a Diamond Pattern

#include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter the number of rows : ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {

        for (col = 1; col <=n - row; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "*";
        }

        cout << "\n";
    }


    for (row = n; row >=1; row--)
    {

        for (col = 1; col <=n - row; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "*";
        }

        cout << "\n";
    }
    return 0;
}