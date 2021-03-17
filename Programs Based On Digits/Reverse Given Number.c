#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,dig=0,temp=0,revnum=0;
    printf("\n Enter Positive Integer to get its reverse number=>  ");
    scanf("%d",&num);
    temp=num;
    if(num<0)
    {
        printf("\n Invalid Number");
    }
     while(temp>0)
        {
            dig=temp%10;
            revnum=(revnum*10)+dig;
            temp=temp/10;
        }
         printf("\n Reverse Number of  %d = %d",num,revnum);

    getch();
    return 0;
}
