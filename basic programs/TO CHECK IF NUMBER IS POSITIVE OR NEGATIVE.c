#include<stdio.h>
#include<conio.h>
int main()
{
  int num=0;
    printf("\n Enter a Number to check if it is positive or negative => ");
    scanf("%d",&num);
    printf("\n***************_______________***************\n");
    if(num>0)
    {
        printf("\n %d is Positive Number",num);
    }
    else if(num<0)
        {

        printf("\n %d is Negative Number",num);

        }
    else
    {
        printf("\n %d is neutral",num);
    }


    printf("\n***************_______________***************\n");
    getch();
    return 0;
}
