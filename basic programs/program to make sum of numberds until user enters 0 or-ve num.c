#include<stdio.h>
#include<conio.h>
int main()
{
  int cnt=1,num=0,sum=0;
    printf("\nEnter number to calculate the sum\n(will stop adding if i/p is 0 or -ve)");
    while(1)
  {
      printf("\n\nEnter number %d=> ",cnt);
    scanf("%d",&num);
    if (num<=0)
    {
        break;
    }
     sum+=num;
     cnt++;
    }
    printf("\n SUM is %d",sum);
   getch();
   return 0;
  }
