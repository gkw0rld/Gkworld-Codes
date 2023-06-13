#include<stdio.h>
int main()
{
    int i,age;
    for ( i = 1; i <=10; i++)
    {
        printf("%d\tEnter your age:-\n",i);
        scanf("%d",&age);

        if (age>100){
            printf("Age has reached the limit");
            break;
        }
    }
    return 0;
}