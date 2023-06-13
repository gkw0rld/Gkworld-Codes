/*
#include<stdio.h>
//function definition to swap values
int swap(int *x, int *y)
{
    int temp;
    temp=*x; //save the value at address x
    *x=*y;  //put the value of y in x
    *y=temp;  //put the temp in y
    return 0;
}

int main()
{
    int a=33,b=65;
    printf("The value before swapping is %d and %d\n",a,b);
    swap(&a,&b);  //function called by reference i.e, &a and &b instead of a and b
    printf("The value after the swapping is %d and %d",a,b);
    return 0;
}
*/

#include<stdio.h>

void change(int *x, int *y)
{
    *x=*x+*y;
    *y=*x-2*(*y);
}

int main()
{
    int a= 4,b=3;
    printf("The values of a and b respectively are %d and %d\n",a,b);
    change(&a,&b);
    printf("The values of a and b after the change function are %d and %d",a,b);
    return 0;
}