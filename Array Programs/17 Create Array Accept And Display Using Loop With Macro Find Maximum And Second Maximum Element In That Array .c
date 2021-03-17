#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int main()
{
    int i=0,ele=0,max1=0,max2=0;
    int A[size]={};
    printf("\n Enter  Elements of Array=>");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    for(i=0;i<size;i++)
    {
        printf("\n Enter Element %d of Array=>",i+1);
        scanf("%d",&A[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    for(i=0;i<size;i++)
    {
        printf("\n A[%d]=> %d",i,A[i]);
    }
    system("cls");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    max1=A[0];
    for (i = 0; i < size; i++)
        {
        if (A[i] > max1)
        {
            max1 = A[i];
        }
        }
    max2=A[0];
     for (i = 0; i < size; i++)
        {
        if (max2 < A[i]&& A[i] < max1)
        {
            max2 = A[i];
        }
        }
        getch();
    printf("\n Maximum  number is %d in given array ", max1);
    printf("\n Second Maximum  number is %d in given array ", max2);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    getch();
    return 0;
}
