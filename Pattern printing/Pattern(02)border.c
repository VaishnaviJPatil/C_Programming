#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r,c;
    printf("\n Enter the numbers of row and columns for pattern printing respectively=>");
    scanf("%d%d",&r,&c);
    printf("\n------------------------------------\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1||i==r||j==1||j==c)
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
