#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &stk, int &element)
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

void reverseStack(stack<int> &stk)
{
    //base case
    if(stk.empty())
    {
        return;
    }

    //ek case hum solve karenge
    int temp = stk.top();
    stk.pop();

    //recursion
    reverseStack(stk);

    //backtracking
    insertAtBottom(stk, temp);
}

int main()
{
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    // while(!stk.empty())
    // {
    //     cout<<stk.top()<<" ";
    //     stk.pop();
    // }

    reverseStack(stk);

    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    
    return 0;
}