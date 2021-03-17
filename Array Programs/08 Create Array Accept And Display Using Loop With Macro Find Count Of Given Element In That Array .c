#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int main()
{
    int i=0,ele=0,cnt=0;;
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
    printf("\n Enter Element to search in Array=>");
    scanf("%d",&ele);
     for(i=0;i<size;i++)
    {
        if(ele==A[i])
        {
            cnt++;
        }
    }
    if(cnt>0)
    {
        printf("\n Element %d found in array %d time \n",ele,cnt);
    }
    else
    {
        printf("\n Element %d not found in array \n",ele);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    getch();
    return 0;
}
