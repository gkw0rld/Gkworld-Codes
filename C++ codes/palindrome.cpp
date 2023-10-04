#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char ch[], int n)
{
    int i=0,j=n-1;

    while(i<=j)
    {
        if(ch[i]==ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char ch[100];
    cout<<"Enter the string"<<endl;
    cin.getline(ch,100);

    int length=strlen(ch);

    bool ispalindrome=checkPalindrome(ch,length);
    if(ispalindrome)
    {
        cout<<"Valid Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a valid Palindrome"<<endl;
    }
    
    return 0;
}