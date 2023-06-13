#include<stdio.h>

int main()
{ char a,b;
  printf("You have to tell whether you have passed in the given subjects or not by giving reply in p/f\n");
  printf("Mathematics:-");
  scanf("%c",&a);
  printf("Science:-");
  scanf(" %c",&b);
  
  if(a=='p' && b=='f'){
    printf("You have passed in Mathematics and you get 15 rupees");
  }
  if(b=='p' && a=='f'){
    printf("You have passed in Science and you get 15 ruppes");
  }
  if(a=='p' && b=='p'){
    printf("You have passed in both math and science you get 45 rupees");
  }
  return 0;
}