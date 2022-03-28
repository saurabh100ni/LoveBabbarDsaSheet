#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // size input

    int *arr = new int[n]; // initialize array

    // input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // print reversed array
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    //use following code if you want to save and print array in reverse order
    /*
    int *arrReversed = new int[n];
    for (int i = 0; i < n; i++)
    {
        arrReversed[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrReversed[i] << " ";
    }
    */
    return 0;
}