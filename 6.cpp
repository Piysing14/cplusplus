// 6. Write a Program to Print Check Whether a Character is an Alphabet or Not

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a Charcter ";
    cin >> ch;

    if (isalpha(ch))
    {
        cout << ch << " is alphabet";
    }
    else
    {
        cout << ch << " is NOT alphabet";
    }
}
