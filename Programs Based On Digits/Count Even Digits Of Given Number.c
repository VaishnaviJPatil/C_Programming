#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,dig=0,temp=0,Ecnt=0;
    printf("\n Enter Positive Integer to count its even digits=>  ");
    scanf("%d",&num);
    temp=num;
    if(num<0)
    {
        printf("\n Invalid Number");
    }
     while(temp>0)
        {
            dig=temp%10;
            if(dig%2==0&&dig!=0)
            {
                Ecnt++;
            }
            temp=temp/10;
        }
         printf("\n Number of even digits in %d =>%d",num,Ecnt);
    getch();
    return 0;
}
