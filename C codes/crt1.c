// #include<stdio.h>
// void main()
// {
//     // unsigned char a = 1;
//     // signed char a = 1;
//     // signed short int a = 1;
//     unsigned short int a = 1;
//     while(a)
//     {
//         printf("%d\t", a);
//         a++;
//     }
// }

// #include<stdio.h>

// void main()
// {
//     int a = 127;
//     if(a&1)
//     {
//         printf("odd");
//     }
//     else
//     {
//         printf("even");
//     }
// }

#include<stdio.h>

void main()
{
    int a = 10;
    int b = 11;

    int c = a - (-b);
    int c = -(-a-b);
    int c = abs(-a-b);
    printf("ans = %d", c);
}
 