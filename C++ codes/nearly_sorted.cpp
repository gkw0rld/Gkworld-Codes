#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int target)
{
    int s=0, e=n-1, mid=s+(e-s)/2;

    while(s<=e)
    {
        if(target==arr[mid])
        {
            return mid;
        }
        if(target==arr[mid-1] && (mid-1)>=0)
        {
            return (mid-1);
        }
        if(target==arr[mid+1] && mid+1<n)
        {
            return (mid+1);
        }
        if(target<arr[mid])
        {
            e=mid-2;
        }
        if(target>arr[mid])
        {
            s=mid+2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target = 70;

    int ans=binarysearch(arr,n,target);
    if(ans==-1)
    {
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"Target found at index "<<ans;
    }
    return 0;
}