#include<stdio.h>
#include<conio.h>
int main()
{
int num1,num2,cnt1,cnt2, mul=1;
printf("\n Enter Range Of Numbers to print tables");
scanf("%d%d",&num1,&num2);
for(cnt1=num1;cnt1<=num2;cnt1++)
{
for(cnt2=1;cnt2<=10;cnt2++)
{
    mul=cnt1*cnt2;
    printf("\n %d*%d=%d",cnt1,cnt2,mul);
}
printf("\n********-------********");
}
getch();
return 0;
}


