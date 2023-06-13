#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i=0; i<size; i++)
    {
        if (key==arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()    
{
    int arr[10]={0,3,5,2,6,8,98,12,34,1};
    cout<<"Enter the key to search for "<<endl;
    int key;
    cin>>key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout<<"The key is found "<<endl;
    }
    else 
    {
        cout<<"The key is not found "<<endl;
    }

}