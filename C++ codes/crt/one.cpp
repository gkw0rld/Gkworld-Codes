// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[10] = {9,6,6,4,3,6,0,8,9,3};
    
//     for(int i = 0; i<10; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     int i = 0;
//     int j = 9;

//     while(i<j)
//     {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
//     cout<<endl;

//     for(int i = 0; i<10; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

// void rotate(vector<int> &v, int n)
// {
//     int temp = v[0];

//     for(int i = 1; i<n; i++)
//     {
//         v[i-1] = v[i];
//     }

//     v[n-1] = temp;
//     for(int i = 0; i<n; i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }

void rotate(vector<int> v, int n, int k)
{
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+n-k);
    reverse(v.begin()+n-k, v.end());
    for(int i = 0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int> v = {1,2,3,4,5};
    rotate(v, 5, 3);
    
    return 0;
}