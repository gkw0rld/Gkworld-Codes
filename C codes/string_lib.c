//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char s1[]="gaurav";
//    char s2[]="khatri";
//    char s3[54];
//    
//    printf("The strcmp for s1 and s2 is: %d ",strcmp(s1,s2));
//    //printf("The length of s1 is %d\n",strlen(s1));
//    //printf("The length of s2 is %d\n",strlen(s2));
//    //puts (strcat(s1,s2));
//    //printf("The reversed string s1 is:");
//    //strrev(s1); //s1 is reversed here
//    //puts(s1);
//    //printf("The reversed string s2 is:");
//    //strrev(s2); //s2 is reversed here
//    //puts(s2);
//    //strcpy(s3,strcat(s1,s2)); //s1 and s2 are already reversed
//    //printf("The new copied string s3 is:");
//    //puts(s3);
//
//    return 0;
//}

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50];
    char s2[50];
    char s3[]=" is a friend of ";
    char s4[50];

    printf("Enter the s1 string\n");
    gets(s1);
    printf("Enter the s2 string\n");
    gets(s2);
    puts(strcat(s1,strcat(s3,s2)));
    strcpy(s4,s1);
    puts (s4);

    return 0;
}