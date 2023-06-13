#include<stdio.h>
#include<conio.h>

/*int main()
{
    int a=34;
    int *ptr=&a;
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    printf("%d",ptr-1);
    return 0;
}*/

int main()
{
    int arr[]={1,2,3,4,5,6,67};
    printf("The address of the first element is %d\n",&arr[0]);
    printf("The address of the first element is %d\n",arr);
    printf("The address of the second element is %d\n",&arr[1]);
    printf("The address of the second element is %d\n",arr+1);

    printf("The value at address of the first element is %d\n",*(&arr[0]));
    printf("The value at address of the first element is %d\n",*(arr));
    printf("The value at address of the second element is %d\n",*(&arr[1]));
    printf("The value at address of the second element is %d\n",*(arr+1));
    return 0;
}