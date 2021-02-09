#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,dig=0,temp=0,zcnt=0;
    printf("\n Enter Positive Integer to count Number of Zero digits=>  ");
    scanf("%d",&num);
    temp=num;
    if(num<0)
    {
        printf("\n Invalid Number");
    }
     while(temp>0)
        {
            dig=temp%10;
            if(dig==0)
            {
                zcnt++;
            }
            temp=temp/10;
        }
         printf("\n Number of Zeros in %d =>%d",num,zcnt);
    getch();
    return 0;
}
