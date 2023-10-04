#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<int> &v)
{
    int n=v.size();
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(vector<int> &v)
{
    int n=v.size();
    for(int i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(v[minIndex]>v[j])
            {
                minIndex=j;
            }
        }
        swap(v[minIndex],v[i]);
    }
}

int main()
{
    vector<int> v={44,33,55,22,11};
    selectionSort(v);
    printvector(v);
    return 0;
}