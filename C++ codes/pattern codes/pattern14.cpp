#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;

    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        int k=2;
        while(k<=i)
        {
            cout<<"*";
            k++;
        }
        int l=2;
        while(l<=i)
        {
            cout<<"*";
            l++;
        }
        int m=1;
        while(m<=n-i+1)
        {
            cout<<n-i-m+2;
            m++;
        }
        
        cout<<endl;
        i++;
    }
}