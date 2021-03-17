#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,dig=0,temp=0,dsum=0;
    printf("\n Enter Positive Integer whose sum of digits is to be displayed=>  ");
    scanf("%d",&num);
    temp=num;
    if(num<0)
    {
        printf("\n Invalid Number");
    }
      while(temp>0)
        {
            dig=temp%10;
            dsum+=dig;
            temp=temp/10;
        }
    printf("\n Sum of digits of %d = %d",num,dsum);
    getch();
    return 0;
}
