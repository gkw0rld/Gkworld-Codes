#include<stdio.h>
#include<conio.h>

int main()
{
//search for format specifiers of printf on google

    printf("Today we will learn about pointers\n");
    int a=76;
    int *ptr=&a;
    int *ptr2=NULL;
    printf("The value of a is %d\n",a);
    printf("The value of a is %p\n",a);
    printf("The value of a is %p\n",&a);
    printf("The value of a is %p\n",ptr);
    printf("The value of a is %p\n",*ptr);
    printf("The address of some garbage is %p\n",ptr2);
    return 0;
} 
