#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;


    while (i<=n)
    {
        int space=1;
        int value=i;
        while(space<i)
        {
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=n-i+1)
        {   
            
            cout<<value;
            value++;
            j++;
        }
        i++;
        cout<<endl;
    }
}