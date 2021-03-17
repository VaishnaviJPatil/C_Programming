#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,dig=0,temp=0,dcnt=0;
    printf("\n Enter Positive Integer to count Number digits=>  ");
    scanf("%d",&num);
    temp=num;
    if(num<0)
    {
        printf("\n Invalid Number");
    }
     while(temp>0)
        {
            dcnt++;
            temp=temp/10;
        }
         printf("\n Number of digits in %d =>%d",num,dcnt);
    getch();
    return 0;
}
