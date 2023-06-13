#include<stdio.h>
void main()
{
    int data[20],c,c1,c2,c3,i;
    int datarec[20];

    printf("Enter the data bit one by one \n");
    scanf("%d", &data[0]);
    scanf("%d", &data[1]);
    scanf("%d", &data[2]);
    scanf("%d", &data[4]);

    data[6]=data[4]^data[2]^data[0];
    data[5]=data[4]^data[1]^data[0];
    data[3]=data[2]^data[1]^data[0];

    printf("The encoded data is :");
    for(i=0; i<7; i++)
    {
        printf("%d", data[i]);
    }

    printf("\nEnter the received data one by one :\n");

    for(i=0; i<7; i++)
    {
        scanf("%d", &datarec[i]);
    }

    c1=datarec[6]^datarec[4]^datarec[2]^datarec[0];
    c2=datarec[5]^datarec[4]^datarec[1]^datarec[0];
    c3=datarec[3]^datarec[2]^datarec[1]^datarec[0];
    c=c3*4+c2*2+c1;

    if (c==0)
    {
        printf("There is no error while transmission of data\n");
    }
    else
    {
        printf("There is an error at the position %d",c);
        if (datarec[7-c]==0)
        {
            datarec[7-c]=1;
        }
        else 
        {
            datarec[7-c]=0;
        }
    }

    printf("\nThe corrected message is:\n");
    for(i =0; i<7; i++)
    {
        printf("%d",datarec[i]);
    }
}