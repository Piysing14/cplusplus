//17. Write a Program to Find the Smallest and Largest Element in an Array

#include <iostream>
using namespace std;

int main()
{
    int arr[10], n;
    cout << "Enter size of array" << endl;
    cin >> n;
    cout << "Enter " << n << " elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}
