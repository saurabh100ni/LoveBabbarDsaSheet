#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements in array : ";
    cin >> n; // size input

    int *arr = new int[n]; // initialize array
    cout<<"Enter elements in array : ";
    // input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout <<"Reversed Array : ";

    // print reversed array
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    //use following code if you want to save and print array in reverse order
    /*
    cout <<"copied and reversed in other Array  : ";
    int *arrReversed = new int[n];
    for (int i = 0; i < n; i++)
    {
        arrReversed[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrReversed[i] << " ";
    }
    cout<<endl;
    */
    return 0;
}