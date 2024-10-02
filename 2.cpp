// 2. Write a Program to Find the Greatest of the Three Numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter first number\n";
    cin >> a;
    cout << "enter second number\n";
    cin >> b;
    cout << "enter third number\n";
    cin >> c;

    (a > b && a > c) ? cout << a << "is largest " : (b > a && b > c) ? cout << b << " is largest"
                                                : (c > a && c > b)   ? cout << c << "is largest "
                                                                     : cout << "";
}