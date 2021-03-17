#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,c=0,num=0,temp=0;

    printf("\n Enter the value  for  printing Pattern=>");
    scanf("%d",&c);
     printf("\n Enter the value of Number whose table is in printing pattern =>");
    scanf("%d",&num);
    temp=num;
    printf("\n------------------------------------\n");
    for(i=1;i<=c;i++)
    {
        num=temp;
        for(j=1;j<=c;j++)
        {

            if(i>=j)
            {
                printf(" %-4d ",num);
                num=num+temp;
            }
            else
            {
                printf("   ");
            }

        }
        printf("\n");
    }
    printf("\n------------------------------------\n");
          getch();
          return 0;
        }

