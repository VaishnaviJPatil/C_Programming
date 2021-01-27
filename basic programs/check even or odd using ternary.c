#include<stdio.h>
#include<conio.h>
int main()
{
  int num;
  printf("\n************------------************\n");
  printf("\nEnter number to check if it is even or odd\n");
  scanf("%d",&num);
  printf("\n************------------************\n");
    ( (num==0)? (printf("\n %d is neither even nor odd number\n",num)):((num%2==0)? (printf("\n %d is even number\n",num)):(printf("\n %d is odd number\n",num))));
  printf("\n************------------************\n");
  getch();
  return 0;
  }


