/*We considere the following program which the user to type his own ID, if the ID is valid it will
 ask him to enter his password, if the password is correct the program will print the name of the
  user, otherwise ,the program will print Incorrect Password and if the ID does not exist , 
  the program will print Incorrect ID*/

#include<stdio.h>
int main()
{
    int ID=007,Pass=12345;
    
    printf("Enter your ID\n");
    scanf("%d",&ID);
    

   switch(ID)
   {
      case 007:
        printf("Enter your Password\n");
        scanf("%d",&Pass);
        switch (Pass)
        {
        case 12345:
            printf("Welcome JAMES BOND");
            break;
        
        default:
        printf("Incorrect Password");
            break;
        }
        break;
    default:
    printf("Incorrect ID");  
   }
  return 0;
}