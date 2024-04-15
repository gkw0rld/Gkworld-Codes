#include<iostream>
using namespace std;

class Stack
{
public:    
    int top;
    int size;
    int *arr;

    Stack (int size)
    {
        this->top = -1;
        this->size = size;
        arr = new int[size];
    }
    
    void push(int data)
    {
        if(top == size - 1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack underflow"<<endl;
        }
        else 
        {
            top--;
        }
    }

    int getSize()
    {
        return top+1;
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    int getTop()
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else 
        {
            return arr[top];
        }
    }

    void print()
    {
        cout<<"Stack:"<<endl;
        for(int i =0; i<getSize(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Stack st(8);//created in a static way
    st.push(12);
    st.push(14);
    st.push(16);

    st.print();

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    //st.print();
}