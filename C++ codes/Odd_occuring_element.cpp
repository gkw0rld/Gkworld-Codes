#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n)
{
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;

    while(s<=e)
    {
        //single element
        if(s==e)
        {
            return s;
        }

        //mid check->even or odd
        if(mid&1) // mid&1--> true-->odd
        {
            if(arr[mid-1] == arr[mid] && mid-1>=0)
            {
                //right me jao
                s=mid+1;
            }
            else{
                //left me jao
                e=mid-1;
            }
        }
        else
        {
            //even
            if(arr[mid]==arr[mid+1] && mid+1<n)
            {
                //right me jao
                s=mid+2;
            }
            else
            {
                //ya toh me right part pe khada hu
                //ya toh me answer pe khada hu
                //thats why e=mid karra hu
                //kyoki e-1 se answer lost ho sakta hai
                e=mid;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[]={10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n=13;
    int finalanswer=findOddOccuringElement(arr, n);
    cout<<"final answer is "<<arr[finalanswer];

    return 0;
}