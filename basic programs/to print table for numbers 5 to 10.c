#include<stdio.h>
#include<conio.h>
int main()
{
int cnt1,cnt2, mul=1;
for(cnt1=5;cnt1<=10;cnt1++)
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


