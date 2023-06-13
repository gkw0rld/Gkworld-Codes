// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int a=0,b=1;
//     cout<<a<<" "<<b<<" ";

//     for (int i=1 ; i<=n ; i++)
//     {
//         int nextNumber=a+b;
//         a=b;
//         b=nextNumber;
//         cout<<nextNumber<<" ";
//     }
// }

/*#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool isPrime=1;

    for (int i=2 ; i<n ; i++)
    {
        if (n%i==0)
        {
            //cout<<"Not a prime number"<<endl;
            isPrime =0;
            break;
        }
    }

    if (isPrime==0)
    {
        cout<<"Not a prime number"<<endl;
    }
    else
    {
        cout<<"Prime number"<<endl;
    }

} */

//prime number using functions

// #include<iostream>
// using namespace std;

// bool isPrime (int n)
// {
//     for (int i=2; i<n; i++)
//     {
//         if (n%i==0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     if (isPrime(n))
//     {
//         cout<<"is prime "<<endl;
//     }
//     else 
//     {
//         cout<<"is not prime"<<endl;
//     }
// }