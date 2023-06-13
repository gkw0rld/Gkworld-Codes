#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int star()
{
    int a,i,j;
    printf("Enter the number of lines for star pattern\n");
    scanf("%d", &a);

    for (i=0;i<a;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int rstar()
{
    int a,i,j;
    printf("Enter the number of lines for reverse star pattern\n");
    scanf("%d", &a);

    for (i=a;i>0;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int n;
    
    do{
     printf("Press 0 to print star pattern\n");
     printf("Press 1 to print reverse star pattern\n");
     printf("Press 3 to exit\n");
     scanf("%d", &n);
    
     switch (n)
     {
         case 0: star();
         break;
 
         case 1: rstar();
         break;

         case 3: exit(0);
         break;
     }
    } while (1);
    return 0;
}