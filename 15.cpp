// 15. Write a Program to Find a Leap Year or Not

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter any year in YYYY format\n";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    
        cout << year << " is a Leap year\n";
    }
    else
    {
        cout << year << " is a NOT Leap year\n";
    }
}
