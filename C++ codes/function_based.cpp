/*#include<iostream>
using namespace std;

bool isEven(int num)
{
    if (num&1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    cin>>num;

    if (isEven(num))
    {
        cout<<"The number is Even"<<endl;
    }
    else 
    {
        cout<<"The number is Odd"<<endl;
    }
} */

#include<iostream>
using namespace std;

int factorial (int n)
{
    int fact=1;
    for (int i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr (int n, int r)
{
    int num = factorial (n);
    int denom = factorial (r) * factorial (n-r);

    int ans=num/denom;
    return ans;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<"The answer is "<< nCr (n,r)<<endl;
}