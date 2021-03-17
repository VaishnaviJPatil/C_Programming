#include<stdio.h>
#include<conio.h>
int main()
{
     int No=0,min=0,max=0,cnt=0;
    printf("\n Enter 10 Nummbers=> ");
    printf("\n***************_______________***************\n");
    for(cnt=1;cnt<=10;cnt++)
    {
        printf("\n Enter Number %d =>",cnt);
        scanf("%d",&No);

        if(cnt==1)
        {
            min=No;
            max=No;
        }
        if(No<min)
        {
            min=No;
        }
        if(No>max)
        {
            max=No;
        }

    }
    printf("\nPress any key to get Minimum and Maximum Number=>");
    getch();
     printf("\n***************_______________***************\n");
    printf("\n Maximum number is %d ",max);
    printf("\n Minimum number is %d ",min);
    printf("\n***************_______________***************\n");
    getch();
    return 0;
}
