#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<int> &v)
{
    int n= v.size();
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(vector<int> &v)
{
    int n=v.size();
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main()
{
    vector<int> v={5,4,3,2,1};
    bubblesort(v);
    printvector(v);
    return 0;
}