#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int main()
{
    int i=0,ele=0,min=0;
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
    min=A[0];
     for(i=0;i<size;i++)
    {

        if(min>A[i])
        {
            min=A[i];
        }
    }
    printf("\n Minimum Element found in array is %d \n",min);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    getch();
    return 0;
}
