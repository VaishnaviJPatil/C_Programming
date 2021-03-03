#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Cnt 6
int main()
{
    int A[Cnt]={};
    int i=0,sr=0;
    printf("\n\n Enter new values for element in array.");
    for(i=0;i<Cnt;i++)
    {
       printf("\n Enter Value of element %d =>",i+101);
       scanf("%d",&A[i]);
    }
    printf("\n\n ********values of new data are*********");
    for(i=0;i<Cnt;i++)
    {
       printf("\n\n  Value of element %d = %d.",i+501,A[i]);
    }
    system("cls");

    printf("\n\nEnter number to search=>");
    scanf("%d",&sr);
    for(i=0;i<Cnt;i++)
    {
         if(sr==A[i])
         {
             break;
         }
    }
    if(i<Cnt)
    {
        printf("\n FIRST OCCCURANCE GIVEN NUMBER %d FOUND ON INDEX %d",sr,i);
    }
    else
    {
        printf("\n GIVEN NUMBER %d NOT FOUND",sr);
    }


    getch();
    return 0;
}
