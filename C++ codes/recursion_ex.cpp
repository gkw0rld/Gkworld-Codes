//print index of a target character in a string as many times it is repeated

#include<iostream>
#include<string>
using namespace std;

void findindex(string name, int size, char target,int index)
{
    if(index>=size)
    {
        return;
    }
    if(name[index]==target)
    {
        cout<<index<<" ";
    }
    findindex(name, size, target, index+1);
}

int main()
{
    string name="Babbar";
    int size=6;
    char target='a';
    int index=0;
    findindex(name,size,target,index);
    return 0;
}