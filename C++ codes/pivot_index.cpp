#include<iostream>
using namespace std;

int getPivot(int nums[], int n)
{
    int s=0, e=n-1, mid= s + ((e-s)/2);
    while (s<=e)
    {
        if(s==e)
        {
            return s;
        }
        if(nums[mid]<nums[mid-1])
        {
            return (mid-1);
        }
        else if(nums[mid]>nums[mid+1])
        {
            return (mid);
        }
        else if(nums[mid]<nums[s])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid = s+((e-s)/2);
    }

    return -1;
}

int main()
{
    int nums[]={12,14,16,2,4,6,8,10};
    int n=8;
    int PivotIndex=getPivot(nums, n);
    cout<<"The pivot index is :"<<PivotIndex;
    return 0;
}