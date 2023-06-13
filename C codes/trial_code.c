#include<stdio.h>

int main()
//1. To find the sum of two numbers given by two numbers
/*{
    float n1, n2;
    printf("Enter the number n1\n");
    scanf("%f",&n1);
    
    printf("Enter the number n2\n");
    scanf("%f",&n2);

    printf("The Sum of the number is:- %f",n1+n2);
    return 0;

}*/

//2. To find the reverse of a 2 digit number given by the user

/*{
    int a,b,c;
    printf("Enter the number you want to reverse:-\n");
    scanf("%d",&a);

    b=a/10;
    c=a%10;

    printf("The reverse of the number is %d",c*10+b);
    return 0;

}*/

//3. To swap the values of two variables

/*{
    int a,b,temp;
    printf("Enter the value of a:-\n");
    scanf("%d",&a);
    
    printf("Enter the value of b:-\n");
    scanf("%d",&b);

    printf("Entered values are a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped values are a=%d and b=%d",a,b);
    return 0;

}*/

//4. To input temperature in degree farenheit and convert into degree celcius

/*{
    float a,b;
    printf("Enter the value of temp in fanrenheit\n");
    scanf("%f",&a);
    
    b=(a-32)*5/9;

    printf("The value of temp in celcius is:-%.4f",b);
    return 0;

}*/

//5. To find the greatest of the three

/*{
    int a,b,c;
    printf("Enter the value of a:-\n");
    scanf("%d",&a);
    
    printf("Enter the value of b:-\n");
    scanf("%d",&b);
    
    printf("Enter the value of c:-\n");
    scanf("%d",&c);
    
    if (a>b)
    {
        if(a>c){
            printf("The greatest of the three is %d",a);
        }
        else {
            printf("The greatest of the three is %d",c);
        }
    
    }
    else if(b>a)
    {
        if(b>c){
            printf("The greatest of the three is %d",b);
        }
        else {
            printf("The greatest of the three is %d",c);
        }
    
    }

    
   return 0;
}*/

//6. To check for even and odd

/*{
    int a;
    printf("Enter the number to check for even or odd\n");
    scanf("%d",&a);

    if(a%2==0)
    {
    printf("The value is even");
    }
    else printf("The value is odd");
    return 0;
}*/

//7. To check wheher value is positive or negative

/*{
    float a;
    printf("Enter the value\n");
    scanf("%f",&a);

    if(a>0){
        printf("The value is positive");
    }
    else if(a<0){
        printf("The value is Negative");
    }
    if(a==0){
        printf("The value is zero");
    }
    return 0;

}*/

//8. To check whether the entered character is vowel or not

/*{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {printf("The entered character is a vowel");}
    else {
        printf("It is not a vowel");
    }
return 0;
}*/

//9. To check if the year is leap year or not

/*{
    int a;
    printf("Enter the year ");
    scanf("%d",&a);

    if(a%4==0 && a%100==0){
        printf("The year is a leap year as well as a century year");
    }
    else if(a%4==0 && a%100!=0){
        printf("The year is a leap year but not a century year");
    }
    else if(a%4!=0){
        printf("The year is neither a leap year nor a century year");
    }
  return 0;
}*/

// 10. Write a c program to swap a number without using temp

/*{
    int a,b;
    printf("Enter the value a=");
    scanf("%d",&a);
    
    printf("Enter the value b=");
    scanf("%d",&b);

    printf("Before swapping a=%d and b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping a=%d and b=%d",a,b);
return 0;
}*/

//11. Mahesh's basic salary is inputted through keyboard. His dearness allowance is 40% of basic salary, and house rent 
//    allowance is 20% of basic salary. Find his gross salary. Gross salary= basic sal + D.A + H.R.A

/*{
    float BS,GS;
    printf("Input the basic salary of Mahesh\n");
    scanf("%f",&BS);

    GS=BS+(0.4*BS)+(0.2*BS);

    printf("Gross salary = %f",GS);
    return 0;
}*/

//12. To input day number and print monday for 1, and so on

/*{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    
    default:
    printf("Incorrect Entry");
        break;
    }
    return 0;
}*/

//13. 
/*#include <stdio.h>
#include <conio.h>

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int x;
    printf("Enter the number you want factorial of\n");
    scanf("%d", &x);
    printf("The factorial of %d is %d", x, factorial(x));
}*/