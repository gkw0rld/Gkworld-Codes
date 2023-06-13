#include<stdio.h>
#include<conio.h>

void pstr(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }

}

int main()
{
    char str[50];
    //char str[]={'g','a','u','r','a','v','\0'};
    //char str[]="gaurav";
    gets(str);
    printf("Using printf:- %s\n",str);
    printf("Using puts function:- ");
    puts(str);
    printf("Using user defined function pstr:- ");
    pstr(str);
    return 0;
}