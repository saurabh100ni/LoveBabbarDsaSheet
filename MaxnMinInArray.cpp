#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The number of elements in array :";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // Sets minimum int value in max
    int max = INT_MIN;
    // Sets maximum int value in min
    int min = INT_MAX;
    // Finds maximum and minimum values in array
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Maximum value in array is :"<<max<<endl;
    cout<<"Minimum value in array is :"<<min<<endl;
    return 0;
}