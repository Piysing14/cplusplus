// 8. Write a Program to Toggle Each Character in a String
//  ok ko
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String to toggle" << endl;
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }

    cout << str << endl;
}
