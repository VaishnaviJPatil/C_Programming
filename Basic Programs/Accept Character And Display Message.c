#include<stdio.h>
#include<conio.h>
int main()
{
    char val;
    printf("\n************----------************\n");
    printf("\n Enter the character to see the respective message => ");
    scanf("%c",&val);
    switch(val)
    {
        case'a':
        case'A':
            printf("\nWelcome");
            break;
        case'b':
        case'B':
            printf("\nGood Bye");
            break;
        case'c':
        case'C':
            printf("\nHave a nice day");
            break;
        case'd':
        case'D':
            printf("\nGood Day");
            break;
        default:
            printf("\nNo message for such character");
    }
    printf("\n************----------************\n");
    getch();
    return 0;
}

