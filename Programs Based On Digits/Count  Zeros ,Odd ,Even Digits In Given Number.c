#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,dig=0,temp=0,zcnt=0,Ocnt=0,Ecnt=0;
    printf("\n Enter Positive Integer to count Number of Zeros,Odd,Even digits=>  ");
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
            else if(dig%2==0&&dig!=0)
            {
                Ecnt++;
            }
            else
            {
                Ocnt++;
            }
            temp=temp/10;
        }
         printf("\n Number of Zeros in %d =>%d",num,zcnt);
         printf("\n Number of Odd digits in %d =>%d",num,Ocnt);
         printf("\n Number of Even digits in %d =>%d",num,Ecnt);
    getch();
    return 0;
}
