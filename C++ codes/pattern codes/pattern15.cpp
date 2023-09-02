#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=0; row<n; row++)
    {
        //printing space
        for(int j=0; j<n-row-1; j++)
        {
            cout<<" ";
        }

        int count=row+1;
        //printing numbers
        for(int j=0; j<row+1; j++)
        {
            cout<<count;
            count=count+1;
        }

        //printing next part
        count=count-2;
        for(int j=0; j<row; j++)
        {
            
            cout<<count;
            count=count-1;
        }
        cout<<endl;
        
    }
}