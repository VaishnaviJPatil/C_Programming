#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,c;
    printf("\n Enter the value of  for  printing X=>");
    scanf("%d",&c);
    printf("\n------------------------------------\n");
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i+j==c+1||i==j)
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
