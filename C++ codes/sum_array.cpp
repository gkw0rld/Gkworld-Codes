#include<iostream>
using namespace std;

int getSum( int arr[], int n)
{
    int sum =0;
    for (int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the number of elements of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The sum of the elements of the array is "<<getSum(arr, n)<<endl;
}