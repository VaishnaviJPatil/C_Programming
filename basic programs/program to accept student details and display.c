#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char Name[25],city[15],course[15];
    int r_no;
    printf("\nEnter Student Name=>");
    scanf("%s",&Name);
    printf("\nEnter Student Roll_No=>");
    scanf("%d",&r_no);
    printf("\nEnter Student City=>");
    scanf("%s",&city);
    printf("\nEnter Student Course=>");
    scanf("%s",&course);
    system("cls");
    printf("\n**********----------**********\n");
    printf("\nName   :%s\nRoll_No:%d\nCity   :%s\nCourse :%s\n",Name,r_no,city,course);
    printf("\n**********----------**********\n");
    getch();
    return 0;


}

