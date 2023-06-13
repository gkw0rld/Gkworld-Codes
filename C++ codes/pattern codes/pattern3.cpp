#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int counter=1;
    
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<counter<<"\t";
            j++;
            counter++;
        }
        i++;
        cout<<endl;
    }
}