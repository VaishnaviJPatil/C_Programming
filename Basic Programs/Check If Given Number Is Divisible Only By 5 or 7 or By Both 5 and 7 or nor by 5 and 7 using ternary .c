#include<stdio.h>
#include<conio.h>
int main()
{
    int num1;
    printf("\n************----------************\n");
    printf("\n Enter Number=>");
    scanf("%d",&num1);
    (num1%5==0&&num1%7==0) ? (printf("%d is divisible by both 5 & 7",num1);):((num1%5==0)  ? (printf("%d is divisible by 5 ",num1);):(((num1%7==0)? (printf("%d is divisible by 7 ",num1);):(printf("%d is neither divisible by 5 nor 7",num1););)));
    printf("\n************----------************\n");
    getch();
    return 0;
}
