#include<iostream>
#include<string.h>
using namespace std;

void uppercaseconvert(char ch[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=ch[i] -'a' +'A';
        }
    }
}

void reversestring(char ch[], int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int findlength(char ch[], int n)
{
    int length=0;
    for(int i=0; i<n; i++)
    {
        if(ch[i]=='\0')
        {
            break;
        }
        else
        {
            length++;
        }
    }
    return length;
}

int main()
{
    char ch[100];
    //cin>>ch;   we cant use it for string:- gaurav khatri
    cin.getline(ch, 100);
    cout<<"The string is: "<<ch<<endl;
    int len=findlength(ch,100);

    // cout<<"The length of string using custom function is "<<len<<endl;
    // cout<<"The length of string using predefined function is "<<strlen(ch)<<endl;

    reversestring(ch,len);

    cout<<"The string after reverse is: "<<ch<<endl;

    uppercaseconvert(ch,len);

    cout<<"The string after converting to uppercase is: "<<ch<<endl;
    return 0;
}