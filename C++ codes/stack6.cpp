#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(int *arr, int size, vector<int> ans)
{
    stack<int> st;
    st.push(-1);

    for(int i = size-1; i>=0; i--)
    {
        //answer find karo curr ke liye
        int curr = arr[i];
        while(st.top()>=curr)
        {
            st.pop();
        }

        ans[i] = st.top();

        st.push(curr);
    }

    return ans;
}

vector<int> prevSmallerElement(int *arr, int size, vector<int> ans)
{
    stack<int> st;
    st.push(-1);

    for(int i = 0; i<size; i++)
    {
        //answer find karo curr ke liye
        int curr = arr[i];
        while(st.top()>=curr)
        {
            st.pop();
        }

        ans[i] = st.top();

        st.push(curr);
    }

    return ans;
}

int main()
{
    int arr[5] = {8, 4, 6, 2, 3};
    int size = 5;
    vector<int> ans1(size);
    ans1 = nextSmallerElement(arr, 5, ans1);
    cout<<"Next Smaller Element : ";

    for(auto i : ans1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> ans2(size);
    ans2 = prevSmallerElement(arr, 5, ans2);
    cout<<"Prev Smaller Element : ";

    for(auto i : ans2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
    return 0;
}