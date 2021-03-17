#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
int No=0,sum=0,cnt=0;
printf("\n Enter the 10 numbers=> ");
for(cnt=1;cnt<=10;cnt++)
{
    printf("\n Enter Number %d=> ",cnt);
    scanf("%d",&No);
   sum=sum+No;
}
printf("\n Press any key to get the summation of given numbers=>");
getche();
system("cls");
printf("\n The summation of given numbers=>%d",sum);
printf("\n \nThanks");
return 0;
}


