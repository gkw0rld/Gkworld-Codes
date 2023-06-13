#include<stdio.h>
#include<conio.h>

int func1(int array[])
{
    for (int i=0; i<4 ; i++)
    {
        printf("The value at index %d is %d\n",i,array[i]);
        array[0]=99;
    }
    return 0;
}

void func2(int *ptr)
{
    for (int i=0; i<4 ; i++)
    {
        printf("The value at index %d is %d\n",i, *(ptr+i));
    }
    *(ptr+2)=9999;
}

void func3(int arr[2][2])
{
    for (int i=0; i<2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d %d is %d\n",i,j,arr[i][j]);
        }
        
    }
}
int main()
{
    int arr[2][2]= {{1,4},{6,9}};
    //printf("The value at index 0 is %d\n",arr[0]);
    //func1(arr);
    //printf("The value at index 0 is %d\n",arr[0]);
    //func2(arr);
    //func2(arr);
    func3(arr);
    return 0;
}