#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {5,1,6,75,7,90,2};

    int it = 0;
    while(it<arr.size())
    {
        int mini = it;
        for(int i = it; i<arr.size()-1; i++)
        {
            if(arr[i+1]< arr[mini])
            {
                mini = i+1;
            }
        }

        if(mini>it)
        {
            swap(arr[it], arr[mini]);
        }

        it++;
    }

    for(int i = 0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}