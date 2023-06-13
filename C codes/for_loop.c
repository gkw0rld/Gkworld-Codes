// Program to calculate the sum of first n natural numbers

#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number ");
    scanf("%d",&n);
    

    for (i=1;i<=n ;i++)
    {
      sum=sum+i;
    }
    printf("sum=%d",sum); 
    return 0;
}