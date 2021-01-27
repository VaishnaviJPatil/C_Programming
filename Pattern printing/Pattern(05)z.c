#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,c;
    printf("\n Enter the value of  for  printing Z=>");
    scanf("%d",&c);
    printf("\n------------------------------------\n");
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1||i==c||i+j==c+1)
            {
            printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n\n");
    }
    printf("\n------------------------------------\n");
    getch();
    return 0;
}
