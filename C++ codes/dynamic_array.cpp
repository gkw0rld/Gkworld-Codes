#include<iostream>
using namespace std;

void printarray(int arr[], int n)
{
    cout<<"The array is "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the amount of array size"<<endl;
    cin>>n;
    int *arr= new int[n];
    cout<<"Enter the elements of array"<<endl;

    for(int i=0; i<n; i++)
    {
        int data;
        cin>>data;
        arr[i]=data;
    }
    printarray(arr, n);

    return 0;
}