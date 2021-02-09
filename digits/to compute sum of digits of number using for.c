#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,dig=0,temp=0,dsum=0;
    printf("\n Enter Positive Integer whose sum of digits is to be displayed=>  ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("\n Invalid Number");
    }
      for(temp=num;temp>0;dsum+=(temp%10),temp/=10 );
    printf("\n Sum of digits of %d = %d",num,dsum);
    getch();
    return 0;
}
