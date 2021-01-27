#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    UP:
    printf("\n************----------************\n");
    printf("\n Enter Two Different Numbers=>");
    scanf("%d%d",&num1,&num2);
    (num1>num2)?(printf("\n %d is maximum",num1)):(printf("\n %d is maximum",num2));
    printf("\n************----------************\n");
    getch();
    return 0;
}

