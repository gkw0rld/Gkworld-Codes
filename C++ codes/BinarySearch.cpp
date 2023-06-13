#include<iostream>
using namespace std;

int BinarySearch (int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;      // it is nothing but (start + end)/2  we used this formula to avoid the intger overflow

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }

        if (key > arr[mid] )
        {
            start = mid +1;
        }

        else 
        {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int even[6]= {2,4,6,8,12,14};
    int odd[5]= {1,3,5,6,9};

    int index = BinarySearch ( even , 6, 14);
    cout<<"The index of 4 is "<<index<<endl;

    return 0;
}