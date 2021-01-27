#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    UP:
    printf("\n************----------************\n");
    printf("\n Enter Two Different Numbers=>");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
    {
        printf("\n Both numbers are equal.\n");
        goto UP;
    }
    else if(num1<num2)
    {
        printf("\n Number %d is maximum",num2);
    }
    else
    {
        printf("\n Number %d is maximum",num1);

    }
    printf("\n************----------************\n");
    getch();
    return 0;
}

