#include<iostream>
using namespace std;

int printArray(int arr[], int size)
{
    cout<<"Printing the array"<<endl;
    for (int i=0; i<size; i++)
    {
        cout<<arr[i];
    }
    cout<<endl<<"Printing done"<<endl;
    return 0;
}

int main()
{
    int first[10] = {0};
    printArray (first, 10);

}