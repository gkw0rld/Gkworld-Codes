#include<iostream>
using namespace std;

void shiftNegativeLeft(int arr[], int n)
{
    int i=0;
    int j=0;

    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[]={-12,-34,15,-1,3,-19,5};
    int n=7;
    cout<<"Printing array"<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    shiftNegativeLeft(arr,n);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}