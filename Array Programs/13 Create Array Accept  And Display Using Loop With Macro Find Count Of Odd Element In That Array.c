#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int main()
{
    int i=0,zcnt=0,ocnt=0,ecnt=0;
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
     for(i=0;i<size;i++)
    {

        if(A[i]==0)
        {
            zcnt++;
        }
    }
    for(i=0;i<size;i++)
    {

        if(A[i]%2==0&& A[i]!=0)
        {
            ecnt++;
        }
        else if(A[i]%2!=0&& A[i]!=0)
            {
              ocnt++;
            }
    }
    printf("\n Count of Null(zero) Elements found in array is %d \n",zcnt);
    printf("\n Count of Even Elements found in array is %d \n",ecnt);
    printf("\n Count of Odd Elements found in array is %d \n",ocnt);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    getch();
    return 0;
}
