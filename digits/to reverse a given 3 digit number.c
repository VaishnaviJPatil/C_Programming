#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,dig=0,temp=0,revnum=0,dcnt=0;
    printf("\n Enter 3 digit Positive Integer to get its reverse number=>  ");
    scanf("%d",&num);
    temp=num;
    if(num<0)
    {
        printf("\n Invalid Number");
    }
    while (temp>0)
    {
        dcnt++;
        temp=temp/10;
    }
    if(dcnt==3)
    {
        temp=num;
     while(temp>0)
        {
            dig=temp%10;
            revnum=(revnum*10)+dig;
            temp=temp/10;
        }
         printf("\n Reverse of Number %d =>%d",num,revnum);
    }
    else
        {
            printf("\n Entered number is not a 3 digit number");

        }

    getch();
    return 0;
}
