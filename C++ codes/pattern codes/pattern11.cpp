#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;

    while(i<=n)
    {
        char ch='A'+i-1;
        int j=1;
        while(j<=n)
        {
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
}