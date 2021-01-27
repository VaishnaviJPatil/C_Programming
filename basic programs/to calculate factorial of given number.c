#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,fact=0,temp=0;
    printf("\nEnter Number to calculate its factorial => ");
    scanf("%d",&num);
    printf("\n***************_______________***************\n");
   for(fact=1,temp=num;temp>0;temp--)
   {
       fact*=temp;
   }
   printf("\nFactorial of number %d is %d\n",num,fact);
    printf("\n***************_______________***************\n");
    getch();
    return 0;
}
