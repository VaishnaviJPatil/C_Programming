#include<stdio.h>
#include<conio.h>
int main()
{
    int A[7]={};
    int i=0;
    printf("\n Initial Elements of Array=>\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    for(i=0;i<7;i++)
    {
        printf("\n 1st Element of Array=>%d",A[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n Enter New Elements of Array=>");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    for(i=0;i<7;i++)
    {
        printf("\n Enter Element %d of Array=>",i+1);
        scanf("%d",&A[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    for(i=0;i<7;i++)
    {
        printf("\n A[%d]=> %d",i,A[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    getch();
    return 0;
}
