#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    float km, in, cm, lb;
    code1:
    printf("\nEnter 1 to convert from km to miles\n");
    printf("Enter 2 to convert from inches to foot\n");
    printf("Enter 3 to convert from cm to inches\n");
    printf("Enter 4 to convert from pounds to kg\n");
    printf("Enter 5 to convert from inches to meters\n");
    printf("Enter 6 to quit conversion\n");
    scanf("%d", &a);

    if(a==1 || a==2 || a==3 || a==4 || a==5)
    {
        b=a;
        if (b == 1)
        {
            printf("Enter the value in km ");
            scanf("%f", &km);
            printf("%f kms = %f miles", km, km * 0.621371);
        }
        else if (b == 2)
        {
            printf("\nEnter the value in inches ");
            scanf("%f", &in);
            printf("%f inches = %f foot", in, in * 0.0833333);
        }
        else if (b == 3)
        {
            printf("\nEnter the value in cms ");
            scanf("%f", &cm);
            printf("%f cms = %f inches", cm, cm * 0.393701);
        }
        else if (b == 4)
        {
            printf("\nEnter the value in pounds ");
            scanf("%f", &lb);
            printf("%f pounds = %f kgs", lb, lb * 0.453592);
        }
        else if (b == 5)
        {
            printf("\nEnter the value in inches ");
            scanf("%f", &in);
            printf("%f inches = %f meters", in, in * 0.0254);
        }
    goto code1;
    }
    else if(a==6)
    {
        goto code2;
    }
    else  
    {
        printf("invalid command");
        goto code1;
    }
    code2 :
}