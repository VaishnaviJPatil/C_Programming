#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,dig=0,temp=0,revnum=0;
    printf("\n Enter Positive Integer to check if it is palindrome or not =>  ");
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
    if(revnum==num)
    {
        printf("\n Given Number %d is palindrome",num);
        printf("\n As %d = %d",num,revnum);
    }
    else
        {
            printf("\n Given Number %d is not palindrome",num);
            printf("\n As %d != %d",num,revnum);
        }

    getch();
    return 0;
}
