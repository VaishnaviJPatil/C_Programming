#include<stdio.h>
#include<conio.h>
int main()
{
  int num;
  printf("\n************------------************\n");
  printf("\nEnter number to check if it is even or odd\n");
  scanf("%d",&num);
  printf("\n************------------************\n");
  if(num==0)
  {
      printf("\nNumber is neither even nor odd\n");
  }
  else if(num%2==0)
  {
      printf("\nNumber is even\n");
  }
  else
  {
      printf("\nNumber is odd\n");
  }
  printf("\n************------------************\n");
  getch();
  return 0;
  }


