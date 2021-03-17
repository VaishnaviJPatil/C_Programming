#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n\tStudent Information Database\n");
    printf("\n************----------************\n");
    printf("\n%-10s %-10s %-10s %-10s %-10s %-10s %-10s\n","Roll_No","Name","Maths","Science","English","Total","Percentage");
    printf("\n%-10d %-10s %-10d %-10d %-10d %-10d %0.2f",115,"Raj",50, 45, 65, 160,  53.333);
    printf("\n%-10d %-10s %-10d %-10d %-10d %-10d %0.2f",15,"Sakshi",70, 64, 75, 209,  69.66667);
    printf("\n%-10d %-10s %-10d %-10d %-10d %-10d %0.2f",115,"rutika",50, 50, 50, 150,  50);
    printf("\n************----------************\n");
    getch();
    return 0;
}

