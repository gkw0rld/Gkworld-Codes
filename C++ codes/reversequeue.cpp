#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void ReverseUsingStack(queue<int> &q)
{
    stack<int> s;
    while(!q.empty())
    {
        int frontelement = q.front();
        q.pop();

        s.push(frontelement);
    }

    while(!s.empty())
    {
        int element = s.top();
        s.pop();

        q.push(element);
    }
}

void ReverseUsingRecursion(queue<int> &q)
{
    //base case
    if(q.empty())
    {
        return;
    }

    //ek case mein sambhalunga
    int element = q.front();
    q.pop();

    //recursion solve karega
    ReverseUsingRecursion(q);

    //last me insert kar dunga
    q.push(element);
}

void printqueue(queue<int> q)
{
    while(!q.empty())
    {
        int element = q.front();
        q.pop();

        cout<<element<<" ";
    }
}

void reverseKelements(queue<int> &q, int k)
{
    stack<int> s;
    int n = q.size();

    //push k elements into stack
    for( int i =0; i <k; i++)
    {
        int element = q.front();
        q.pop();

        s.push(element);
    }

    //push k elements from stack into queue
    while(!s.empty())
    {
        int element = s.top();
        s.pop();

        q.push(element);
    }

    //pop and push n-k elements into queue to put the remaining elements to their original position
    for(int i = 0; i<n-k; i++)
    {
        int element = q.front();
        q.pop();

        q.push(element);
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout<<"Before reversing the queue"<<endl;
    printqueue(q);

    //ReverseUsingRecursion(q);
    reverseKelements(q,4);

    cout<<endl<<"After reversing the queue"<<endl;
    printqueue(q);

    
    return 0;
}