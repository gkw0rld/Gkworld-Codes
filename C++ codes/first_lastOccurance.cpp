#include<iostream>
using namespace std;

int firstOcc( int arr[], int n, int key)
{
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if (key == arr[mid])
        {
            ans = mid ;
            e = mid -1;
        }

        else if (key > arr[mid])
        {
            s = mid +1;
        }
        
        else 
        {
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc( int arr[], int n, int key)
{
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if (key == arr[mid])
        {
            ans = mid ;
            s = mid + 1;
        }

        else if (key > arr[mid])
        {
            s = mid +1;
        }
        
        else 
        {
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int even[12] = {1,2,3,3,3,3,3,3,3,3,3,5};
    cout<<"The first occurrence of 3 is at index "<<firstOcc(even, 12, 3)<<endl;
    cout<<"The last occurrence of 3 is at index "<<lastOcc(even, 12, 3);

    return 0;
}