//      *********         redundant brackets present or not     ***********

//       ********     valid parantheses present or not ka bhi logic almost same hai       ********
#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string &str)
{
    stack<char> st;
    for(int i = 0; i<str.length(); i++)
    {
        char ch = str[i];
        if(ch=='(' || ch == '+' || ch == '-' || ch=='*' || ch =='/')
        {
            st.push(ch);
        }
        else if(ch == ')')
        {
            int operatorCount = 0;
            while(!st.empty() && st.top()!='(')
            {
                char temp = st.top();
                if(temp == '+' || temp == '-' || temp == '*' || temp == '/')
                {
                    operatorCount ++;
                }
                st.pop();
            }
            //yaha pr aap tabhi pohchoge jab
            //stack ke top par opening bracket hoga
            st.pop();

            if(operatorCount == 0)
            {
                return true;
            }  
        }
    }
    //yaha tak pohche ho mtlb ek bracket ke pair ke beech me 
    //ek na ek operator pakka mila hoga
    return false;
}

int main()
{
    string str = "((a+b)*(c-d))";
    bool ans = checkRedundant(str);
    if(ans)
    {
        cout<<"Redundant brackets are present"<<endl;
    }
    else
    {
        cout<<"Redundant brackets are not present"<<endl;
    }
    
    return 0;
}