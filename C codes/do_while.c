// Program to add numbers until the sum becomes zero

#include<stdio.h>
int main()
{
    int sum=0,n;
    

    do
    {printf("Enter the number to add\n");
    scanf("%d",&n);
        sum=sum+n;
        printf("new sum is %d\n",sum);
    } while (sum!=0);
    return 0;
}
