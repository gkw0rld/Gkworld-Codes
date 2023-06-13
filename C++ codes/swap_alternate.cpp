#include<iostream>
using namespace std;

int swapAlternate(int arr[], int n)
{
    for (int i=0; i<n;i+=2)
    {
        if (i+1<n)
        {
            swap(arr[i], arr[i+1]);

        }
    }    
    return 0;
    
}

int printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main()
{
    int arr[6] = {1,5,3,8,-1,45};
    int brr[5] = {12,23,45,56,67};

    swapAlternate(arr, 6);
    printArray(arr, 6);

    swapAlternate (brr, 5);
    printArray (brr, 5);
}