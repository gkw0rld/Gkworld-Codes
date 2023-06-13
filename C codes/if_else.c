#include<stdio.h>
int main()
{ int age;
  printf("Enter your age:-");
  scanf("%d",&age);

    printf("You have entered %d as your age\n",age);

    if(age>=18){
        printf("You are eligible to vote");
    }
    else if(age>=10){
        printf("Your age is between 10 to 18 you can vote kids");
    }
    else{
        printf("You cannot vote");
    }
    return 0;
    
}