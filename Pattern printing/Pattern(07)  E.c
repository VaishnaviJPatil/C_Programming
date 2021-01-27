#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,c;
    printf("\n Enter the value of column for  printing E=>");
    scanf("%d",&c);
    printf("\n------------------------------------\n");
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1||i==c||j==1||i==(c+1)/2&&i>=j)
            {
            printf(" * ");
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
