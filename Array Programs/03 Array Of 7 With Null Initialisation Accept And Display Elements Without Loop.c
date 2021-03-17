#include<stdio.h>
#include<conio.h>
int main()
{
    int A[7]={};
    printf("\n Elements of Array=>\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n 1st Element of Array=>%d",A[0]);
    printf("\n 2nd Element of Array=>%d",A[1]);
    printf("\n 3rd Element of Array=>%d",A[2]);
    printf("\n 4th Element of Array=>%d",A[3]);
    printf("\n 5th Element of Array=>%d",A[4]);
    printf("\n 6th Element of Array=>%d",A[5]);
    printf("\n 7th Element of Array=>%d",A[6]);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    getch();
    printf("\n Enter New Element of Array=>");
    printf("\n Enter 1st Element of Array=>");
    scanf("%d",&A[0]);
    printf("\n Enter 2nd Element of Array=>");
    scanf("%d",&A[1]);
    printf("\n Enter 3rd Element of Array=>");
    scanf("%d",&A[2]);
    printf("\n Enter 4th Element of Array=>");
    scanf("%d",&A[3]);
    printf("\n Enter 5th Element of Array=>");
    scanf("%d",&A[4]);
    printf("\n Enter 6th Element of Array=>");
    scanf("%d",&A[5]);
    printf("\n Enter 7th Element of Array=>");
    scanf("%d",&A[6]);
    system("cls");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n A[0]=>%d\nA[1]=>%d\nA[2]=>%d\nA[3]=>%d\nA[4]=>%d\nA[5]=>%d\nA[6]=>%d\n",A[0],A[1],A[2],A[3],A[4],A[5],A[6]);
    getch();
    return 0;
}
