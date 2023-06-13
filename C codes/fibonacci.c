#include<stdio.h>
#include<conio.h>

int ite(int n)
{
    int a, b; 
    a=0;
    b=1;
    for (int i=0; i<n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}

int rec(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else 
    {
        return rec(n-1) + rec(n-2);
    }
}

int main()
{
    int number;
    printf("Enter the position of the number of the fibonacci series\n");
    scanf("%d",&number);
    printf("The number at position %d in the fibonacci series using recursion is %d\n",number,rec(number));
    printf("The number at position %d in the fibonacci series using iteration is %d",number,ite(number));
    return 0;
}