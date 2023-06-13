//To print upto 20 numebers excluding 8
//I used 2 loops 1st from 1 to 7 then 9 to 20


#include<stdio.h>
int main()
{
    int i=1,j=9;
    while (i<=7)
    {
        printf("%d ",i);
        i++;
    }
    while (j<=20)
    {
        printf("%d ",j);
        j++;
    }
    return 0;
}