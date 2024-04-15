// #include<iostream>
// #include<stack>
// using namespace std;

// //                 *******      reverse using stack      *********

// int main()
// {
//     string str = "Gaurav";
//     stack<char> stk;

//     for(int i = 0; i<str.length(); i++)
//     {
//         char ch = str[i];
//         stk.push(ch);
//     }

//     for(int i = 0; i<str.length(); i++)
//     {
//         cout<<stk.top()<<" ";
//         stk.pop();
//     }
    
//     return 0;
// }

//                    ********    finding middle element in a stack     ********

// #include<iostream>
// #include<stack>
// using namespace std;

// void solve (stack<int> &stk, int &pos, int &ans)
// {
//     //base case
//     if(pos == 1)
//     {
//         ans = stk.top();
//         return;
//     }

//     //ek case hum solve karenge
//     pos--;
//     int temp = stk.top();
//     stk.pop();

//     //recursion
//     solve(stk, pos, ans);

//     //backtracking
//     stk.push(temp);
// }

// int getMiddleElement(stack<int> &stk)
// {
//     int size = stk.size();
//     int pos=0;
//     if(stk.empty())
//     {
//         cout<<"The stack is empty"<<endl;
//         return -1;
//     }
//     else 
//     {
//         //for odd number of elements
//         if(size & 1)
//         {
//             pos = size/2 +1;
//         }
//         //for even number of elements
//         else 
//         {
//             pos = size/2;
//         }

//         int ans =-1;
//         solve(stk, pos, ans);
//         return ans;
//     }
// }

// int main()
// {
//     stack<int> stk;
//     stk.push(10);
//     stk.push(20);
//     stk.push(30);
//     stk.push(40);
//     stk.push(50);

//     int mid = getMiddleElement(stk);
//     cout<<"Middle: "<<mid<<endl;
    
//     return 0;
// }


//       *********        insert at bottom of the stack           ********

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& stk, int &element)
{
    //base case
    if(stk.empty())
    {
        stk.push(element);
        return;
    }

    //ek case hum solve karenge
    int temp = stk.top();
    stk.pop();

    //recursion
    insertAtBottom(stk, element);

    //backtracking
    stk.push(temp);
}

int main()
{
    stack<int> stk;
    int element = 400;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    insertAtBottom(stk,element);

    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }

    return 0;
}