#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  int num1,num2;
  printf("***************----------***************");
  printf("\n\tEnter Number1:");
  scanf("%d",&num1);
  printf("\n\tEnter Number2:");
  scanf("%d",&num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("***************----------***************");
  printf("\n\tAfter swapping the output is\nNumber1=%d\nNumber2=%d\n",num1,num2);
 printf("***************----------***************");
  getch();

    return 0;


}

