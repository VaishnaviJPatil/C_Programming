#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,c=0,num=0;


    printf("\n Enter the value  for  printing Pattern=>");
    scanf("%d",&c);
    printf("\n------------------------------------\n");
    for(i=1;i<=c;i++)
    {
        num++;
        for(j=1;j<=c;j++)
            {

            if(i<=j)
            {
                printf(" %d ",num);

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

