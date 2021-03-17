#include<stdio.h>
#include<conio.h>
int main()
{
int No,cnt;
printf("\n Enter the Number whose table is to be printed=> ");
scanf("%d",&No);
for(cnt=1;cnt<=10;cnt++)
{
    printf("\n %d * %d = %d",No,cnt,(No*cnt));

}
getch();
return 0;
}
