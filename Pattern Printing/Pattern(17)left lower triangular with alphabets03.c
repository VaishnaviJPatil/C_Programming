#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,c=0;
    char ch='A';
    printf("\n Enter the value  for  printing Pattern=>");
    scanf("%d",&c);
    printf("\n------------------------------------\n");
    for(i=1;i<=c;i++)
    {

        for(j=1;j<=c;j++)
        {

            if(i>=j)
            {
                printf(" %c ",ch);

            }
            else
            {
                printf("   ");
            }
            ch++;
        }
        printf("\n");
    }
    printf("\n------------------------------------\n");
          getch();
          return 0;
        }

