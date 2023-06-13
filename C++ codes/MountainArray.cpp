#include<iostream>
using namespace std;

int indexfinder(int arr[], int n)
{
    int i = 1;
    int ans;
    while (i<=n)
    {
        if (  arr[i-1] < arr[i] && arr[i]> arr[i+1])
        {
            return (i);
        }
        i++;
    }
    return false;
}

int main()
{
    int arr[5] ={0,2,3,1,-1};
    cout<<"The index where the mountain array has its peak is "<< indexfinder(arr, 5);
    return 0;
}